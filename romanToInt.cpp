#include <bits/stdc++.h>
using namespace std;
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}

int romanToInt(string s)
{
    // Write your code here
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int s1 = value(s[i]);
        if (i < s.length() - 1)
        {
            int s2 = value(s[i + 1]);
            if (s1 >= s2)
                ans += s1;
            else
            {
                ans = ans + s2 - s1;
                i++;
            }
        }
        else
            ans += s1;
    }
    return ans;
}

string intToRoman(int n)
{
    string s = "";
    while (n > 0)
    {
        if (n >= 1000)
        {
            s = s + "M";
            n = n - 1000;
            continue;
        }
        else if (n >= 900)
        {
            s = s + "CM";
            n = n - 900;
            continue;
        }
        else if (n >= 500)
        {
            s = s + "D";
            n = n - 500;
            continue;
        }
        else if (n >= 400)
        {
            s = s + "CD";
            n = n - 400;
            continue;
        }
        else if (n >= 100)
        {
            s = s + "C";
            n = n - 100;
            continue;
        }
        else if (n >= 90)
        {
            s = s + "XC";
            n = n - 90;
            continue;
        }
        else if (n >= 50)
        {
            s = s + "L";
            n = n - 50;
            continue;
        }
        else if (n >= 40)
        {
            s = s + "XL";
            n = n - 40;
            continue;
        }
        else if (n >= 10)
        {
            s = s + "X";
            n = n - 10;
            continue;
        }
        else if (n >= 9)
        {
            s = s + "IX";
            n = n - 9;
            continue;
        }
        else if (n >= 5)
        {
            s = s + "V";
            n = n - 5;
            continue;
        }
        else if (n == 4)
        {
            s = s + "IV";
            n = n - 4;
            continue;
        }
        else if (n >= 1)
        {
            s = s + "I";
            n = n - 1;
            continue;
        }
    }
    return s;
}

int main()
{
    cout << intToRoman(27);
    return 0;
}