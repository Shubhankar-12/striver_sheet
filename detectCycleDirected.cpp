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
bool bfs(int node, vector<int> adj[], int n)
{
    vector<int> indeg(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (auto it : adj[i])
            indeg[it]++;
    }
    queue<int> q;
    vector<int> topo;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int fr = q.front();
        q.pop();
        topo.push_back(fr);
        for (auto it : adj[fr])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
    }
    if (topo.size() == n)
        return true;
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
int detectCycleInDirectedGraphBFS(int n, vector<pair<int, int>> &edges)
{
    vector<int> adj[n + 1];
    for (auto it : edges)
    {
        adj[it.first].push_back(it.second);
    }
    vector<int> indeg(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        for (auto it : adj[i])
            indeg[it]++;
    }
    queue<int> q;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }

    while (!q.empty())
    {
        int fr = q.front();
        q.pop();
        cnt++;
        for (auto it : adj[fr])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
    }
    if (cnt == n)
        return 0;
    return 1;
}

int main()
{

    return 0;
}