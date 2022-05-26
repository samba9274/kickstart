#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    vector<int> S(str.begin(), str.end());
    cin >> str;
    vector<int> F(str.begin(), str.end());
    long int R = 0;
    for_each(S.begin(), S.end(), [&R, F](int a)
             {
                 vector<int> temp(F.size());
                 transform(F.begin(), F.end(), temp.begin(), [a](int x)
                           { return min(abs(a - x), 26 - abs(a - x)); });
                 R += *min_element(temp.begin(), temp.end());
             });
    cout << R << '\n';
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