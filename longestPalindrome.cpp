#include <bits/stdc++.h>
using namespace std;
// ababc
string longestPalinSubstring(string str)
{
    int lo, hi;
    int n = str.size();
    int st = 0, end = 1;
    for (int i = 0; i < n; i++)
    {
        lo = i, hi = i + 1;
        while (lo >= 0 && hi < n && str[lo] == str[hi])
        {
            if (hi - lo + 1 > end)
            {
                st = lo;
                end = hi - lo + 1;
            }
            lo--, hi++;
        }
        lo = i - 1, hi = i + 1;
        while (lo >= 0 && hi < n && str[lo] == str[hi])
        {
            if (hi - lo + 1 > end)
            {
                st = lo;
                end = hi - lo + 1;
            }
            lo--, hi++;
        }
    }
    return str.substr(st, end);
}

int main()
{

    return 0;
}