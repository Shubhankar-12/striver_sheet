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

    return 0;
}