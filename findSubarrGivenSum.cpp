#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    map<int, int> mp;
    mp[0] = 1;
    int preSum = 0, cnt = 0;
    for (auto i : arr)
    {
        preSum += i;
        cnt += mp[preSum - k];

        mp[preSum]++;
    }
    return cnt;
}

int main()
{

    return 0;
}