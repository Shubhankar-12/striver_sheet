#include <bits/stdc++.h>
using namespace std;

int help(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}

int NthRoot(int n, int m)
{
    // Write your code here.
    int st = 1, end = m;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        int midN = help(mid, n, m);
        if (midN == 1)
            return mid;
        else if (midN == 0)
            st = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << NthRoot(n, m);
    return 0;
}