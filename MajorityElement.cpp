#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int> arr, int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] > floor(n / 2))
            return arr[i];
    }
    return -1;
}

int majorityElement(vector<int> arr)
{
    int n = arr.size();
    int currEle;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            currEle = arr[i];
            cnt = 1;
        }
        if (currEle == arr[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == currEle)
            cnt1++;
    }

    if (cnt1 > (n / 2))
        return currEle;
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findMajorityElement(arr, n) << endl;
        cout << majorityElement(arr) << endl;
    }
    return 0;
}