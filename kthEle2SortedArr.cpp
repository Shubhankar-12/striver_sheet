#include <bits/stdc++.h>
using namespace std;

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k)
{
    // Write your code here.
    if (m > n)
        return ninjaAndLadoos(row2, row1, n, m, k);
    int low = max(0, k - n);
    int high = min(m, k);
    int left = k;
    while (low <= high)
    {
        int mid1 = (low + high) / 2;
        int mid2 = left - mid1;

        int l1, l2, r1, r2;

        l1 = mid1 - 1 >= 0 ? row1[mid1 - 1] : INT_MIN;
        l2 = mid2 - 1 >= 0 ? row2[mid2 - 1] : INT_MIN;

        r1 = mid1 < m ? row1[mid1] : INT_MAX;
        r2 = mid2 < n ? row2[mid2] : INT_MAX;

        if (l1 <= r2 and l2 <= r1)
            return max(l1, l2);
        else if (l1 > r2)
            high = mid1 - 1;
        else
            low = mid1 + 1;
    }
    return -1;
}

int main()
{

    return 0;
}