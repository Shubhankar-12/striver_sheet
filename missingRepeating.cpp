#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    ll SN = (n * (n + 1)) / 2;
    ll S2N = (n * (n + 1) * (2 * n + 1)) / 6;
    ll S = 0, S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S += arr[i];
        S2 += (arr[i] * arr[i]);
    }
    ll val1 = S - SN;
    ll val2 = S2 - S2N;

    val2 /= val1;
    ll x = (val1 + val2) / 2;
    ll y = x - val1;
    return {(int)y, (int)x};
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
    cout << missingAndRepeating(arr, n).first << " " << missingAndRepeating(arr, n).second;
    return 0;
}