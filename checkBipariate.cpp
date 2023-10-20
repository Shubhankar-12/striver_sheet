#include <bits/stdc++.h>
using namespace std;

bool bfs(vector<vector<int>> &adj, vector<int> &vis, int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : adj[node])
        {
            if (vis[it] == -1)
            {
                vis[it] = !vis[node];
                q.push(it);
            }
            else if (vis[it] == vis[node])
                return false;
        }
    }
    return true;
}

bool dfs(vector<vector<int>> &adj, vector<int> &vis, int src, int col)
{
    vis[src] = col;
    for (auto it : adj[src])
    {
        if (vis[it] == -1)
        {
            if (!dfs(adj, vis, it, !col))
                return false;
        }
        else if (vis[it] == col)
            return false;
    }
    return true;
}

bool isGraphBirpatite(vector<vector<int>> &edges)
{
    int n = edges.size();
    int m = edges[0].size();
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (edges[i][j] == 1)
            {
                adj[i].push_back(j);
            }
        }
    }
    vector<int> vis(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == -1)
        {
            bool fl = dfs(adj, vis, i, 0);
            if (fl == false)
                return false;
        }
    }
    return true;
}
int main()
{

    return 0;
}