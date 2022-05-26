#include <bits/stdc++.h>
using namespace std;

bool isInt(double k) { return std::floor(k) == k; }
void solve()
{
    int progressions = 0;
    double mat[8];
    for (int i = 0; i < 8; i++)
        cin >> mat[i];
    if ((mat[0] + mat[2]) == (mat[1] * 2))
        progressions++;
    if ((mat[0] + mat[5]) == (mat[3] * 2))
        progressions++;
    if ((mat[5] + mat[7]) == (mat[6] * 2))
        progressions++;
    if ((mat[2] + mat[7]) == (mat[4] * 2))
        progressions++;

    vector<int> mid, occ;
    if (isInt(((mat[0] + mat[7]) / 2)))
        mid.push_back(((mat[0] + mat[7]) / 2));
    if (isInt(((mat[1] + mat[6]) / 2)))
        mid.push_back(((mat[1] + mat[6]) / 2));
    if (isInt(((mat[2] + mat[5]) / 2)))
        mid.push_back(((mat[2] + mat[5]) / 2));
    if (isInt(((mat[3] + mat[4]) / 2)))
        mid.push_back(((mat[3] + mat[4]) / 2));
    for (int i = 0; i < mid.size(); i++)
        occ.push_back(count(mid.begin(), mid.end(), mid[i]));
    if (occ.size() > 0)
        progressions += *max_element(occ.begin(), occ.end());
    cout << progressions << "\n";
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