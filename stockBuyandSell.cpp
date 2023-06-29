#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> arr, int n)
{
    int maxx = 0;
    int minn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minn)
            minn = arr[i];
        maxx = max(maxx, arr[i] - minn);
    }
    return maxx;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxProfit(arr, n) << endl;

    return 0;
}