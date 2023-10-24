#include <bits/stdc++.h>
using namespace std;

vector<int> findSchedule(int n, vector<pair<int, int>> &arr)
{
    vector<vector<int>> adj(n + 1);
    for (auto it : arr)
    {
        adj[it.second].push_back(it.first);
    }
    // int indeg[n] = {0};
    vector<int> indeg(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (auto it : adj[i])
        {
            indeg[it]++;
        }
    }
    vector<int> ans;
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int fr = q.front();
        q.pop();
        ans.push_back(fr);
        for (auto it : adj[fr])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                q.push(it);
        }
    }
    if (ans.size() == n)
        return ans;
    return {};
}

int main()
{

    return 0;
}