#include <bits/stdc++.h>
using namespace std;
// s1 error
int countFaults(int n, vector<string> logs)
{
    unordered_map<string, int> mp;
    int ans = 0;
    for (auto s : logs)
    {
        if (s.substr(3, s.size()) == "error")
        {
            mp[s.substr(0, 2)]++;
            if (mp[s.substr(0, 2)] % 3 == 0)
            {
                ans++;
                mp[s.substr(0, 2)] -= 3;
            }
        }
    }
    return ans;
}

int gainMaxValue(vector<int> sv, int k)
{
    int maxx = INT_MIN;
    int n = sv.size();
    int j = 0;
    for (int i = 0; i < n - k; i += k)
    {
        }
    return maxx;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << gainMaxValue(arr, k);
    return 0;
}