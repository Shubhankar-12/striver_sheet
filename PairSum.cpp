#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int tp = i + 1;
        while (tp != arr.size())
        {
            if (arr[i] + arr[tp] == s)
                ans.push_back({i, tp});
            tp++;
        }
    }
    return ans;
}

int main()
{

    return 0;
}