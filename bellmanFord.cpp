#include <bits/stdc++.h>
using namespace std;

vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges)
{
    vector<int> dis(n, 1e8);
    dis[src] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int w = it[2];
            if (dis[u] != 1e8 && (dis[u] + w < dis[v]))
                dis[v] = dis[u] + w;
        }
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int w = it[2];
            if (dis[u] != 1e8 && (dis[u] + w < dis[v]))
                return {-1};
        }
    }
    return dis;
}

int main()
{

    return 0;
}