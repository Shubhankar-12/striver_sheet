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

    for (int i = ind; i < n; i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > k)
            break;
        ref.push_back(arr[ind]);
        help(arr, ind + 1, n, k, ans, ref);
        ref.pop_back();
    }
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    vector<int> ref;
    help(arr, 0, n, k, ans, ref);
    return ans;
}

int main()
{

    return 0;
}