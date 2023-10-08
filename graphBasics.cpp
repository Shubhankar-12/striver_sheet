#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &tmp)
{
    vis[node] = 1;
    tmp.push_back(node);
    for (auto adj_node : adj[node])
    {
        if (!vis[adj_node])
        {
            dfs(adj_node, vis, adj, tmp);
        }
    }
}

vector<vector<int>> depthFirstSearch(int n, int e, vector<vector<int>> &edges)
{
    vector<int> adj[n + 1];
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vector<int> tmp;
            dfs(i, vis, adj, tmp);
            ans.push_back(tmp);
        }
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[m + 1];
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    return 0;
}