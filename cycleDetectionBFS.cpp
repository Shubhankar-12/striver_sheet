#include <bits/stdc++.h>
using namespace std;

bool help(vector<int> adj[], int n, vector<int> &vis)
{
    queue<pair<int, int>> q;
    q.push({n, -1});
    vis[n] = 1;
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (auto an : adj[node])
        {
            if (!vis[an])
            {
                vis[an] = 1;
                q.push({an, node});
            }
            else if (parent != an)
            {
                return true;
            }
        }
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
        if (help(adj, i + 1, vis))
            return "YES";
    return "NO";
}

int main()
{

    return 0;
}