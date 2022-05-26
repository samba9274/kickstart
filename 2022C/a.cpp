#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    string str;
    cin >> N >> str;
    regex str_expr1(".*[0-9]+.*");
    regex str_expr2(".*[a-z]+.*");
    regex str_expr3(".*[A-Z]+.*");
    regex str_expr4(".*[#@*&]+.*");
    if (!regex_match(str, str_expr1))
        str += '1';
    if (!regex_match(str, str_expr2))
        str += 'a';
    if (!regex_match(str, str_expr3))
        str += 'A';
    if (!regex_match(str, str_expr4))
        str += '&';
    while (str.length() < 7)
        str += '1';
    cout << str << "\n";
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