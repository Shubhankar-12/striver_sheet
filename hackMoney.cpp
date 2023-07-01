#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        !(n % 10) || (n == 1) ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}