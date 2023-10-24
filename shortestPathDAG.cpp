#include <bits/stdc++.h>
using namespace std;
void topoSort(vector<vector<pair<int, int>>> adj, vector<int> &vis, stack<int> &st, int node)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it.first])
        {
            topoSort(adj, vis, st, it.first);
        }
    }
    st.push(node);
}

vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &arr)
{
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < n; i++)
    {
        int u = arr[i][0];
        int v = arr[i][1];
        int wt = arr[i][2];
        adj[u].push_back({v, wt});
    }
    vector<int> vis(n, 0);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            topoSort(adj, vis, st, i);
        }
    }
    vector<int> dist(n, INT_MAX);
    dist[0] = 0;
    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        for (auto it : adj[node])
        {
            int v = it.first;
            int w = it.second;
            if (dist[node] + w < dist[v])
                dist[v] = dist[node] + w;
        }
    }
    return dist;
}

int main()
{

    return 0;
}