#include <bits/stdc++.h>
using namespace std;

int NthRoot(int n, int m)
{
    // Write your code here.
    for (int i = 1; i <= m; i++)
    {
        if (pow(i, n) == m)
            return i;
        if (pow(i, n) > m)
            return -1;
    }
}

int main()
{

    return 0;
}