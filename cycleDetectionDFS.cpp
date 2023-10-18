#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<int> adj[], vector<int> &vis, int src, int parent)
{
    vis[src] = 1;
    for (auto an : adj[src])
    {
        if (!vis[an])
        {
            if (dfs(adj, vis, an, src))
                return true;
        }
        else if (an != parent)
            return true;
    }
    return false;
}
string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0] - 1;
        int v = edges[i][1] - 1;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
        if (dfs(adj, vis, i, -1))
            return "YES";
    return "NO";
}

int main()
{

    return 0;
}