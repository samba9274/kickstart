#include <bits/stdc++.h>
using namespace std;

double area(int radius)
{
    return (radius * radius * 3.1415927);
}

void solve()
{
    int R, A, B;
    double res = 0;
    cin >> R >> A >> B;
    for (int i = 0; i < 5763; i++, R *= A, R /= B)
        res += area(R) + area(R * A);
    cout << fixed << setprecision(6) << res << "\n";
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