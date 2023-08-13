#include <bits/stdc++.h>
using namespace std;

void help(string &s, vector<string> &ans, int ind)
{
    if (ind == s.size())
    {
        ans.push_back(s);
        return;
    }
    for (int i = ind; i < s.size(); i++)
    {
        swap(s[i], s[ind]);
        help(s, ans, ind + 1);
        swap(s[i], s[ind]);
    }
}

vector<string> findPermutations(string &s)
{
    vector<string> ans;
    help(s, ans, 0);
    return ans;
}

int main()
{

    return 0;
}