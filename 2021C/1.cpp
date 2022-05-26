#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;
    string R;
    for (int i = 0; i < N; i++)
        R += 'a';

    while (strcmp(S.c_str(), R.c_str()) > 0)
    {
        for (int a = 0; a <= N / 2; a++)
            for (int j = 0; j < K; j++)
            {
                R[S.length() / 2 + a] = (char)(j + 'a');
                R[S.length() / 2 - a] = (char)(j + 'a');
                cout << R << "\n";
            }
    }
}

int main(void)
{
    int T;
    cin >> T;
    // while (T--)
    solve();
    return 0;
}