#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(vertices, INT_MAX);
    dist[source] = 0;
    // distance, node
    pq.push({0, source});
    vector<pair<int, int>> adj[vertices];
    for (auto i : vec)
    {
        int u = i[0];
        int v = i[1];
        int wt = i[2];
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }
    while (!pq.empty())
    {
        int distance = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto i : adj[node])
        {
            int edgeWeight = i.second;
            int adjNode = i.first;

            if (distance + edgeWeight < dist[adjNode])
            {
                dist[adjNode] = distance + edgeWeight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }

    return dist;
}

int main()
{

    return 0;
}