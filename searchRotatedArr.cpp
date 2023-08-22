#include <bits/stdc++.h>
using namespace std;

int search(int *arr, int n, int k)
{
    int lo = 0, hi = n - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) >> 1;
        if (arr[mid] == k)
            return mid;
        if (arr[lo] <= arr[mid])
        {
            if (arr[lo] <= k && arr[mid] >= k)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        else
        {
            if (arr[mid] <= k && arr[hi] >= k)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
    }
    return -1;
}

int main()
{

    return 0;
}