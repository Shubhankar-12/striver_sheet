#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> mp;
    for (auto i : arr)
    {
        mp[i]++;
    }
    vector<int> ans;
    for (auto i : arr)
    {
        if (mp[i] > floor(n / 3))
        {
            ans.push_back(i);
            mp[i] = -1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}