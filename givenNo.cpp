#include <bits/stdc++.h>
using namespace std;

bool check(int t)
{
    return ((t % 10 == 1) || (t % 10 == 4) || (t % 10 == 9));
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        if (i == 0)
            continue;
        int t = i;
        bool flag = 0;
        while (t != 0)
        {
            if (!check(t))
            {
                flag = 1;
                break;
            }
            t = t / 10;
        }
        if (!flag)
            cout << i << " ";
    }

    return 0;
}