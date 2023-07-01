#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<string, int> mp;
    for (auto i : arr)
        mp[i]++;
    for (auto i : mp)
        cout << i.first << " " << i.second << endl;
    return 0;
}