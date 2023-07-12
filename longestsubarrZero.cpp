#include <bits/stdc++.h>
using namespace std;

int getLongestZeroSumSubarrayLength(vector<int> &arr)
{
    int sum = 0, maxi = 0;
    int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0)
            maxi += 1;
        else
        {
            if (mp.find(sum) != mp.end())
            {
                maxi = max(maxi, i - mp[sum]);
            }
            else
                mp[sum] = i;
        }
    }
    return maxi;
}

int main()
{

    return 0;
}