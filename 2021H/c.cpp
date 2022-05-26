#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    while (S.find("01") != string::npos ||
           S.find("12") != string::npos ||
           S.find("23") != string::npos ||
           S.find("34") != string::npos ||
           S.find("45") != string::npos ||
           S.find("56") != string::npos ||
           S.find("67") != string::npos ||
           S.find("78") != string::npos ||
           S.find("89") != string::npos ||
           S.find("90") != string::npos)
    {
        for (size_t index = S.find("01"); index != string::npos; index = S.find("01", index + 1))
            S.replace(index, 2, "2");
        for (size_t index = S.find("12"); index != string::npos; index = S.find("12", index + 1))
            S.replace(index, 2, "3");
        for (size_t index = S.find("23"); index != string::npos; index = S.find("23", index + 1))
            S.replace(index, 2, "4");
        for (size_t index = S.find("34"); index != string::npos; index = S.find("34", index + 1))
            S.replace(index, 2, "5");
        for (size_t index = S.find("45"); index != string::npos; index = S.find("45", index + 1))
            S.replace(index, 2, "6");
        for (size_t index = S.find("56"); index != string::npos; index = S.find("56", index + 1))
            S.replace(index, 2, "7");
        for (size_t index = S.find("67"); index != string::npos; index = S.find("67", index + 1))
            S.replace(index, 2, "8");
        for (size_t index = S.find("78"); index != string::npos; index = S.find("78", index + 1))
            S.replace(index, 2, "9");
        for (size_t index = S.find("89"); index != string::npos; index = S.find("89", index + 1))
            S.replace(index, 2, "0");
        for (size_t index = S.find("90"); index != string::npos; index = S.find("90", index + 1))
            S.replace(index, 2, "1");
    }
    cout << S << '\n';
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