#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll maxSubarraySum(int arr[], int n)
{
    int maxT = INT_MIN, maxE = 0;
    for (int i = 0; i < n; i++)
    {
        maxE += arr[i];
        if (maxT < maxE)
            maxT = maxE;
        if (maxE < 0)
            maxE = 0;
    }
    return maxT;
}

int main()
{

    return 0;
}