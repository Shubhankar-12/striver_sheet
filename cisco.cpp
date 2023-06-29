#include <bits/stdc++.h>
using namespace std;

int help(string s)
{
    int stp = 0;
    char prev = '\0';

    for (char c : s)
    {
        if (c != prev)
        {
            stp++;
            prev = c;
        }
    }
    return stp;
}

int main()
{
    string s;
    cin >> s;
    cout << help(s);
    return 0;
}