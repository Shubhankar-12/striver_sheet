#include <bits/stdc++.h>
using namespace std;

int calculateMinPatforms(int at[], int dt[], int n)
{
    sort(at, at + n);
    sort(dt, dt + n);
    int i = 1, j = 0;
    int maxP = 1, pt = 1;
    while (i < n)
    {
        if (at[i] <= dt[j])
        {
            pt++;
            i++;
        }
        else
        {
            pt--;
            j++;
        }
        maxP = max(maxP, pt);
    }
    return maxP;
}

int main()
{
    int n;
    cin >> n;
    int st[n];
    int end[n];
    for (int i = 0; i < n; i++)
        cin >> st[i];
    for (int i = 0; i < n; i++)
        cin >> end[i];
    cout << calculateMinPatforms(st, end, n);
    return 0;
}