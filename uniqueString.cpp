#include <bits/stdc++.h>
using namespace std;

int uniqueSubstrings(string s)
{
    vector<int> mp(256, -1);
    int left = 0, right = 0, ans = 0;
    while (right < s.length())
    {
        if (mp[s[right]] != -1)
            left = max(mp[s[right]] + 1, left);
        mp[s[right]] = right;
        ans = max(ans, right - left + 1);
        right++;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << uniqueSubstrings(s);
    return 0;
}