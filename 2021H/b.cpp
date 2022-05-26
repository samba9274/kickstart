#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    string P;
    cin >> P;
    vector<bool> Y(N + 2, false), B(N + 2, false), R(N + 2, false);
    for (int i = 0; i < P.length(); i++)
    {
        Y[i + 1] = (P[i] == 'Y' || P[i] == 'O' || P[i] == 'G' || P[i] == 'A');
        R[i + 1] = (P[i] == 'R' || P[i] == 'O' || P[i] == 'P' || P[i] == 'A');
        B[i + 1] = (P[i] == 'B' || P[i] == 'P' || P[i] == 'G' || P[i] == 'A');
    }
    int strokes = 0;
    for (int i = 0; i < Y.size(); i++)
        strokes += (Y[i] == 1 && Y[i - 1] == 0) ? 1 : 0;
    for (int i = 0; i < R.size(); i++)
        strokes += (R[i] == 1 && R[i - 1] == 0) ? 1 : 0;
    for (int i = 0; i < B.size(); i++)
        strokes += (B[i] == 1 && B[i - 1] == 0) ? 1 : 0;
    cout << strokes << '\n';
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