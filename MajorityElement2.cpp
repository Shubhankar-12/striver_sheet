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

vector<int> majorityElementII(vector<int> arr)
{
    int n = arr.size();
    int cnt1 = 0, cnt2 = 0;
    int e1 = INT_MIN, e2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 && e1 != arr[i])
        {
            cnt1 = 1;
            e1 = arr[i];
        }
        else if (cnt2 == 0 && e2 != arr[i])
        {
            cnt2 = 1;
            e2 = arr[i];
        }
        else if (e1 == arr[i])
            cnt1++;
        else if (e2 == arr[i])
            cnt2++;
        else
            cnt1--, cnt2--;
    }
    int c1 = 0, c2 = 0;
    vector<int> ls;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == e1)
            c1++;
        if (arr[i] == e2)
            c2++;
    }

    int mini = int(n / 3) + 1;
    if (c1 >= mini)
        ls.push_back(e1);
    if (c2 >= mini)
        ls.push_back(e2);
    return ls;
}

int main()
{

    return 0;
}