#include <bits/stdc++.h>
using namespace std;

int minTimeToRot(vector<vector<int>> &grid, int n, int m)
{
    vector<vector<int>> vis(n, vector<int>(m, 0));
    int fr = 0;
    queue<pair<pair<int, int>, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                vis[i][j] = 2;
                q.push({{i, j}, 0});
            }
            if (grid[i][j] == 1)
                fr++;
        }
    }
    int tm = 0;
    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};

    while (!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        tm = max(tm, t);
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nr = r + drow[i];
            int nc = c + dcol[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc <= m && vis[nr][nc] == 0 && grid[nr][nc] == 1)
            {
                q.push({{nr, nc}, t + 1});
                fr--;
                vis[nr][nc] = 2;
            }
        }
    }
    if (fr)
        return -1;
    return tm;
}

int main()
{

    return 0;
}