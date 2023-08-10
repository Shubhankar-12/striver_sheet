#include <bits/stdc++.h>
using namespace std;

void help(vector<int> arr, int ind, int n, int k, vector<vector<int>> &ans, vector<int> &ref)
{
    if (ind == n)
    {
        if (accumulate(ref.begin(), ref.end(), 0) == k)
        {
            ans.push_back(ref);
        }
        return;
    }

    ref.push_back(arr[ind]);
    help(arr, ind + 1, n, k, ans, ref);
    ref.pop_back();

    help(arr, ind + 1, n, k, ans, ref);
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    vector<int> ref;
    help(arr, 0, n, k, ans, ref);
    return ans;
}

int main()
{

    return 0;
}