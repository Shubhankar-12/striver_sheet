#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string numberToWords(int num)
    {
        if (num == 0)
            return "Zero";
        string res = "";
        int qt = num / 1000000000;
        if (qt)
        {
            if (qt == 1)
                res = "One Billion";
            else
                res = "Two Billion";
            num = num % 1000000000;
        }
        qt = num / 1000000;
        if (qt)
        {
            string temp = help(qt);
            res = fun(res) + temp + " Million";
            num = num % 1000000;
        }
        qt = num / 1000;
        if (qt)
        {
            string temp = help(qt);
            res = fun(res) + temp + " Thousand";
            num = num % 1000;
        }
        if (num == 0)
            return res;
        string temp = help(num);
        return fun(res) + temp;
    }
    string help(int num)
    {
        string res = "";
        string ones[9] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        string tens[8] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        string ten_to_nineteen[10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        int qt = num / 100;
        if (qt)
        {
            res = ones[qt - 1] + " " + "Hundred";
            num = num % 100;
        }
        qt = num / 10;
        if (qt > 1)
        {
            res = fun(res) + tens[qt - 2];
            num = num % 10;
        }
        if (10 <= num && num <= 19)
        {
            return fun(res) + ten_to_nineteen[num - 10];
        }
        if (num == 0)
            return res;
        return fun(res) + ones[num - 1];
    }
    string fun(string str)
    {
        if (str == "")
            return "";
        else
            return str + " ";
    }
};

int main()
{

    return 0;
}