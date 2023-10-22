#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, int vis[], stack<int> &st)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis, st);
        }
    }
    st.push(node);
}

vector<int> topologicalSortDFS(vector<vector<int>> &edges, int v, int e)
{
    // Write your code here
    vector<vector<int>> adj(v);
    for (int i = 0; i < e; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
    }
    int vis[v] = {0};
    stack<int> st;
    for (int i = 0; i < v; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i, adj, vis, st);
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
vector<int> topologicalSortBFS(vector<vector<int>> &edges, int v, int e)
{
    vector<vector<int>> adj(v);
    for (int i = 0; i < e; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
    }
    queue<int> q;
    vector<int> indeg(v, 0);
    for (int i = 0; i < v; i++)
    {
        for (auto it : adj[i])
        {
            indeg[it]++;
        }
    }
    for (int i = 0; i < v; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }
    vector<int> ans;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for (auto it : adj[node])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
    }
    return ans;
}
int main()
{

    return 0;
}