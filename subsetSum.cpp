#include <bits/stdc++.h>
using namespace std;

void help(vector<int> &num, int i, int n, vector<int> &ans, int sum)
{
    if (i == n)
    {
        ans.push_back(sum);
        return;
    }
    help(num, i + 1, n, ans, sum + num[i]);
    help(num, i + 1, n, ans, sum);
}

vector<int> subsetSum(vector<int> &num)
{
    int n = num.size();
    vector<int> ans;
    help(num, 0, n, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{

    return 0;
}