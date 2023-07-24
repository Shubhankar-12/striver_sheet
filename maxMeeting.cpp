#include <bits/stdc++.h>
using namespace std;

int maximumMeetings(vector<int> &start, vector<int> &end)
{
    vector<pair<int, int>> ans;
    for (int i = 0; i < start.size(); i++)
        ans.push_back({end[i], start[i]});
    sort(ans.begin(), ans.end());
    int ei = ans[0].first;
    int cnt = 1;
    for (int i = 1; i < ans.size(); i++)
    {
        if (ans[i].second > ei)
        {
            ei = ans[i].first;
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    vector<int> st(n), end(n);
    for (int i = 0; i < n; i++)
        cin >> st[i];
    for (int i = 0; i < n; i++)
        cin >> end[i];
    cout << maximumMeetings(st, end);
    return 0;
}