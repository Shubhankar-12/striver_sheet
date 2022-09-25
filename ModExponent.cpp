#include <bits/stdc++.h>
using namespace std;
#define ll long long

int modularExponentiation(int x, int n, int m)
{
    int ans = 1;

    while (n > 0)
    {
        if (n & 1)
        {
            ans = (1ll * (ans) * (x) % m) % m;
        }
        x = (1ll * (x) % m * (x) % m) % m;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        cout << modularExponentiation(x, n, m) << endl;
    }
    return 0;
}