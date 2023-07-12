#include <bits/stdc++.h>
using namespace std;

int subarraysWithSumK(vector<int> arr, int k)
{
    map<int, int> mp;
    mp[0] = 1;
    int xr = 0, cnt = 0;
    for (auto i : arr)
    {
        xr ^= i;
        int x = xr ^ k;
        cnt += mp[x];
        mp[xr]++;
    }
    return cnt;
}

int main()
{

    return 0;
}