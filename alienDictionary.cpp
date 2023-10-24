#include <bits/stdc++.h>
using namespace std;

vector<int> topo(vector<vector<int>> adj, int k)
{
    vector<int> indeg(k, 0);
    for (int i = 0; i < k; i++)
    {
        for (auto it : adj[i])
            indeg[it]++;
    }
    queue<int> q;
    for (int it = 0; it < k; it++)
    {
        if (indeg[it] == 0)
            q.push(it);
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

string getAlienLanguage(vector<string> &arr, int k)
{
    vector<vector<int>> adj(k);
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        string s1 = arr[i];
        string s2 = arr[i + 1];
        int len = min(s1.size(), s2.size());
        for (int j = 0; j < len; j++)
        {
            if (s1[j] != s2[j])
            {
                adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                break;
            }
        }
    }
    string ans = "";
    vector<int> topSort = topo(adj, k);
    for (auto it : topSort)
        ans += ('a' + it);
    return ans;
}

int main()
{

    return 0;
}