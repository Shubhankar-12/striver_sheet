#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll help(vector<int> arr, int pgs, int n)
{
    ll st = 1, pg = 0;
    for (int i = 0; i < n; i++)
    {
        if (pg + arr[i] <= pgs)
        {
            pg += arr[i];
        }
        else
        {
            pg = arr[i];
            st++;
        }
    }
    return st;
}

ll ayushGivesNinjatest(int n, int m, vector<int> arr)
{
    if (m > n)
        return -1;
    int low = *max_element(arr.begin(), arr.end()), high = accumulate(arr.begin(), arr.end(), 0);

    while (low <= high)
    {
        int mid = (low + high) >> 1;
        ll st = help(arr, mid, n);
        if (st > m)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

int main()
{
    int n, m;
    cin >> m >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << ayushGivesNinjatest(n, m, arr);

    return 0;
}