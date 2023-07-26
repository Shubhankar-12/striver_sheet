#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int> a, vector<int> b)
{
    return a[2] > b[2];
}

vector<int> jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(), jobs.end(), comp);
    int maxD = 0;
    for (auto i : jobs)
        maxD = max(maxD, i[1]);
    vector<int> ans(maxD + 1, -1);
    int cp = 0, jp = 0;
    for (int i = 0; i < jobs.size(); i++)
    {
        for (int j = jobs[i][1]; j > 0; j--)
        {
            if (ans[j] == -1)
            {
                ans[j] = jobs[i][0];
                cp++;
                jp += jobs[i][2];
                break;
            }
        }
    }
    return {cp, jp};
}

int main()
{

    return 0;
}