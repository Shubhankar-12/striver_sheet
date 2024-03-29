#include <bits/stdc++.h>
using namespace std;

int getTotalIslands(int **arr, int n, int m)
{
    vector<vector<int>> vis(n, vector<int>(m, 0));
    queue<pair<int, int>> q;

    int delrow[] = {-1, -1, 0, +1, +1, +1, 0, -1};
    int delcol[] = {0, +1, +1, +1, 0, -1, -1, -1};
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1 && !vis[i][j])
            {
                cnt++;
                q.push({i, j});
                vis[i][j] = 1;

                while (!q.empty())
                {
                    auto front = q.front();
                    q.pop();

                    int sr = front.first;
                    int sc = front.second;

                    for (int k = 0; k < 8; k++)
                    {
                        int dr = sr + delrow[k];
                        int dc = sc + delcol[k];

                        if (dr >= 0 && dr < n && dc >= 0 && dc < m && !vis[dr][dc] && arr[dr][dc] == 1)
                        {
                            vis[dr][dc] = 1;
                            q.push({dr, dc});
                        }
                    }
                }
            }
        }
    }

    return cnt;
}

int main()
{

    return 0;
}