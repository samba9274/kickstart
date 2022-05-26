#include <bits/stdc++.h>
using namespace std;

int z = 0;

int sub(int a) { return a - z; }

int add(int a) { return a + z; }

int abso(int a) { return abs(a); }

bool eq(int a, int b) { return a == b; }

void solve()
{
    int N, M;
    cin >> N >> M;
    set<int, less<int>> ps;
    vector<int> s;
    for (int i = 0; i < N; i++)
    {
        int m, n;
        cin >> m >> n;
        int l[n - m];
        iota(l, l + n - m + 1, m);
        ps.insert(l, l + n - m + 1);
    }
    for (int i = 0; i < M; i++)
    {
        int k;
        cin >> k;
        s.push_back(k);
    }
    for (int i = 0; i < M; i++)
    {
        z = s[i];
        vector<int> ps2(ps.begin(), ps.end());
        transform(ps2.begin(), ps2.end(), ps2.begin(), sub);
        transform(ps2.begin(), ps2.end(), ps2.begin(), abso);
        int k = *min_element(ps2.begin(), ps2.end());
        vector<int>::iterator it = find(ps2.begin(), ps2.end(), k);
        int index = it - ps2.begin();
        set<int>::iterator it2 = ps.begin();
        advance(it2, index);
        int x = *it2;
        ps.erase(x);
        cout << x << " ";
    }
    cout << "\n";
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}