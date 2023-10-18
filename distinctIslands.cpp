#include <bits/stdc++.h>
using namespace std;

void dfs(int row, int col, int **arr, vector<vector<int>> &vis, int n, int m, int row0, int col0, vector<pair<int, int>> &vec)
{
    vis[row][col] = 1;
    vec.push_back({row - row0, col - col0});
    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};
    for (int i = 0; i < 4; i++)
    {
        int nr = row + dr[i];
        int nc = col + dc[i];
        if (nr >= 0 && nr < n && nc >= 0 && nc < m && !vis[nr][nc] && arr[nr][nc] == 1)
        {
            dfs(nr, nc, arr, vis, n, m, row0, col0, vec);
        }
    }
}

int distinctIslands(int **arr, int n, int m)
{
    vector<vector<int>> vis(n, vector<int>(m, 0));
    set<vector<pair<int, int>>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && arr[i][j] == 1)
            {
                vector<pair<int, int>> vec;
                dfs(i, j, arr, vis, n, m, i, j, vec);
                st.insert(vec);
            }
        }
    }
    return st.size();
}

int main()
{

    return 0;
}