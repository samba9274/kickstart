#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string S;
    cin >> S;
    vector<string> strings(24, string(S.size(), '1'));
    vector<int> vals(24, (pow(2, (S.size())) - 1));
    set<char> chars;
    for (int i = 0; i < S.size(); i++)
    {
        chars.insert(S[i]);
        strings[(S[i] - 'a')][i] = '0';
    }
    for (int i = S.size() - 1; i >= 0; i--)
        vals[(S[i] - 'a')] -= pow(2, (S.size() - i - 1));
    int val = -1;
    for (char c : chars)
    {
        if (val == -1)
            val = vals[(c - 'a')];
        else
        {
            cout << vals[(c - 'a')] << "\t";
            val = (val ^ vals[(c - 'a')]);
        }
        cout << val << "\n";
    }
    cout << val << "\n";
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