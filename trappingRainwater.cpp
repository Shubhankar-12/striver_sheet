#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll getTrappedWater(ll *arr, int n)
{
    ll i = 0, j = n - 1, lm = 0, rm = 0;
    ll sum = 0;
    while (i <= j)
    {
        if (arr[i] <= arr[j])
        {
            if (arr[i] >= lm)
                lm = arr[i];
            else
                sum += (lm - arr[i]);
            i++;
        }
        else
        {
            if (arr[j] >= rm)
                rm = arr[j];
            else
                sum += (rm - arr[j]);
            j--;
        }
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << getTrappedWater(arr, n);

    return 0;
}