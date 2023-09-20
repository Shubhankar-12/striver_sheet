#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int k)
{
    int cnt = 1, last = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - arr[last] >= n)
        {
            cnt++;
            last = i;
        }
        if (cnt >= k)
            return true;
    }
    return false;
}

int aggressiveCows(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int lo = 1, hi = arr[n - 1] - arr[0];
    while (lo <= hi)
    {
        int mid = (lo + hi) >> 1;
        if (isPossible(arr, mid, k))
        {
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return hi;
}

int main()
{

    return 0;
}