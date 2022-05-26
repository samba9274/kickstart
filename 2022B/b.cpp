#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
        return true;
    return false;
}
void solve()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i == i)
            {
                if (isPalindrome(to_string(i)))
                    count++;
            }
            else
            {
                if (isPalindrome(to_string(i)))
                    count++;
                if (isPalindrome(to_string((n / i))))
                    count++;
            }
        }
    }
    // cout << count << "\n";
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