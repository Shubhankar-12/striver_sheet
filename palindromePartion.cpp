#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int st, int end)
{
    while (st <= end)
    {
        if (s[st++] != s[end--])
            return false;
    }
    return true;
}

void help(string &s, int ind, vector<vector<string>> &ans, vector<string> &ref)
{
    if (ind == s.length())
    {
        ans.push_back(ref);
        return;
    }
    for (int i = ind; i < s.size(); i++)
    {
        if (isPalindrome(s, ind, i))
        {
            ref.push_back(s.substr(ind, i - ind + 1));
            help(s, i + 1, ans, ref);
            ref.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    vector<string> ref;
    help(s, 0, ans, ref);
    return ans;
}

int main()
{

    return 0;
}