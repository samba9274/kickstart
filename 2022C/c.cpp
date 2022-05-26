#include <bits/stdc++.h>
using namespace std;

struct ant
{
    int pos;
    int dir;
    int number;
}

void
solve()
{
    int N, L, z = 10;
    vector<int> ants;
    cin >> N >> L;
    int s = 1, e = N;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        pos.push_back(x);
        dir.push_back(y);
    }
    while (z--)
    // while (pos.size() > 0)
    {
        vector<int> newPos(pos.begin(), pos.end()), newDir(dir.begin(), dir.end());
        for (int i = 0; i < pos.size(); i++)
        {
            if (dir[i] == 0)
            {
                newPos[i]--;
                continue;
            }
            if (i > 0 && dir[i] == 0 && dir[i - 1] == 1 && pos[i] - pos[i - 1] == 1)
            {
                newDir[i] = 1;
                continue;
            }
            if (i > 0 && dir[i] == 0 && dir[i - 1] == 1 && pos[i] - pos[i - 1] == 0)
            {
                newDir[i] = 1;
                newPos[i]++;
            }
            if (i > 0 && dir[i] == 0 && dir[i - 1] == 1 && pos[i] - pos[i - 1] > 1)
            {
                newPos[i]--;
                continue;
            }
            if (i == pos.size())
            {
                pos[i]++;
                continue;
            }
            if (i < pos.size() && dir[i] == 1 && dir[i - 1] == 0 && pos[i + 1] - pos[i] == 1)
            {
                newDir[i] = 0;
                continue;
            }
            if (i < pos.size() && dir[i] == 1 && dir[i - 1] == 0 && pos[i + 1] - pos[i] == 0)
            {
                newDir[i] = 0;
                newPos[i]--;
            }
            if (i < pos.size() && dir[i] == 1 && dir[i - 1] == 0 && pos[i + 1] - pos[i] > 1)
            {
                newPos[i]++;
                continue;
            }
        }
        // for (int i = 0; i < pos.size(); i++)
        //     cout << pos[i] << " ";
        // cout << "\n";
        pos = newPos;
        dir = newDir;
        if (pos[0] == 0)
        {
            pos.erase(pos.begin());
            dir.erase(dir.begin());
            cout << s++ << " ";
        }
        if (pos[pos.size() - 1] == L)
        {
            pos.pop_back();
            dir.pop_back();
            cout << e-- << " ";
        }
    }
    cout << "\n";
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