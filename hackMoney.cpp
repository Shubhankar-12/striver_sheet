#include <bits/stdc++.h>
using namespace std;

bool hackMoney(int money, int curr)
{
    if (money == 1)
        return true;
    if (curr == money)
        return true;
    if (curr > money)
        return false;
    return hackMoney(money, curr * 10) || hackMoney(money, curr * 20);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        hackMoney(n, 1) ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}