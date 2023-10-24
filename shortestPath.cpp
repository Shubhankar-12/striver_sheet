#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t)
{
    vector<vector<int>> adj(n);
    for (auto it : edges)
    {
        adj[it.first].push_back(it.second);
        adj[it.second].push_back(it.first);
    }
    vector<int> dist(n, INT_MAX);
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : adj[node])
        {
            if (dist[node] + 1 < dist[it])
            {
                dist[it] = dist[node] + 1;
                q.push(it);
            }
        }
    }
    vector<int> ans;
    for (int i = s; i < t; i++)
    {
        ans.push_back(dist[i]);
    }
    return ans;
}

int main()
{

    return 0;
}