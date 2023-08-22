#include <bits/stdc++.h>
using namespace std;

int help(vector<int> arr, int mid)
{
    int l = 0, h = arr.size() - 1;
    while (l <= h)
    {
        int md = (l + h) >> 1;
        if (arr[md] <= mid)
            l = md + 1;
        else
            h = md - 1;
    }
    return l;
}

int median(vector<vector<int>> &arr, int m, int n)
{
    int low = 0, hi = 1e9;
    while (low <= hi)
    {
        int mid = (low + hi) / 2;
        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
            cnt += help(arr[i], mid);
        }
        if (cnt <= (m * n) / 2)
            low = mid + 1;
        else
            hi = mid - 1;
    }
    return low;
}

int main()
{
    return 0;
}