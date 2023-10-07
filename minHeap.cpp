#include <bits/stdc++.h>
using namespace std;

long fun(vector<int> arr, int n)
{
    double s = 0;
    for (int i = 0; i < n; i++)
    {
        s += (double)arr[i];
    }
    // (s+x)/(n+1)=2(s/2);
    double x = ((2 * (s / (double)n)) * (double)(n + 1)) - s;
    return ceil(x);
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
    cout << fun(arr, n);
    return 0;
}