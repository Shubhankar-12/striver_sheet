#include <bits/stdc++.h>
using namespace std;

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    unordered_map<int, list<pair<int, int>>> adjList;
    for (int i = 0; i < g.size(); i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int weight = g[i].second;
        adjList[u].push_back({v, weight});
        adjList[v].push_back({u, weight});
    }
    vector<int> key(n + 1, INT_MAX);
    vector<bool> inMST(n + 1, false);
    vector<int> parent(n + 1, -1);
    key[1] = 0;
    parent[1] = -1;
    for (int i = 1; i < n; i++)
    {
        int minKey = INT_MAX;
        int u;
        for (int v = 1; v <= n; v++)
        {
            if (!inMST[v] && key[v] < minKey)
            {
                u = v;
                minKey = key[v];
            }
        }
        inMST[u] = true;
        for (auto it : adjList[u])
        {
            int v = it.first;
            int weight = it.second;
            if (!inMST[v] && weight < key[v])
            {
                parent[v] = u;
                key[v] = weight;
            }
        }
    }
    vector<pair<pair<int, int>, int>> result;
    for (int i = 2; i <= n; i++)
    {
        result.push_back({{parent[i], i}, key[i]});
    }
    return result;
}

int main()
{

    return 0;
}