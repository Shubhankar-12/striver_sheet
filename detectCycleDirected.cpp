#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<int> ad[], int vis[], int pathVis[])
{
    vis[node] = 1;
    pathVis[node] = 1;
    for (auto it : ad[node])
    {
        if (!vis[it])
        {
            if (dfs(it, ad, vis, pathVis))
                return true;
        }
        else if (pathVis[it])
            return true;
    }

    pathVis[node] = 0;
    return false;
}

// bfs
bool bfs(int node, vector<int> ad[], int vis[], int pathVis[])
{
    vis[node] = 1;
    pathVis[node] = 1;
    queue<int> q;
    q.push(node);
    while (!q.empty())
    {
        int fr = q.front();
        q.pop();
        for (auto it : ad[fr])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                pathVis[it] = 1;
                q.push(it);
            }
            else if (pathVis[it])
                return true;
            pathVis[it] = false;
        }
    }
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{
    int vis[n + 1] = {0};
    int dfsVis[n + 1] = {0};
    vector<int> adj[n + 1];
    for (auto it : edges)
    {
        adj[it.first].push_back(it.second);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, adj, vis, dfsVis))
                return 1;
        }
    }
    return 0;
}

int main()
{

    return 0;
}