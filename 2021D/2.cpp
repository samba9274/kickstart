#include <bits/stdc++.h>
using namespace std;

unsigned long long int increment(unsigned long long int x) { return (x + 1); }
void solve()
{
    int N;
    unsigned long long int C;
    cin >> N >> C;
    long int s = pow(10, 9);
    cout << "Here" << endl;
    vector<long int> cuts(s, 0);
    cout << "Here" << endl;
    for (int i = 0; i < N; i++)
    {
        unsigned long long int m, n;
        cin >> m >> n;
        transform(cuts.begin() + m + 1, cuts.begin() + n, cuts.begin() + m + 1, increment);
    };
    cout << "Here" << endl;
    sort_heap(cuts.begin(), cuts.end(), greater<int>());
    cout << "Here" << endl;
    if (C < s)
        for (int i = 0; i < C; i++)
            N += cuts[i];
    else
        for (int i = 0; i < s; i++)
            N += cuts[i];
    cout << N << "\n";
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