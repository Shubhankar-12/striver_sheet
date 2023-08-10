#include <bits/stdc++.h>
using namespace std;

void help(vector<int> arr, int ind, int n, int k, vector<vector<int>> &ans, vector<int> &ref)
{
    if (k == 0)
    {
        ans.push_back(ref);
        return;
    }

    for (int i = ind; i < n; i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > k)
            break;
        ref.push_back(arr[i]);
        help(arr, i + 1, n, k - arr[i], ans, ref);
        ref.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int k)
{
    // Write your code here.
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