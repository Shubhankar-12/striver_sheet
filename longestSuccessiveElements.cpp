#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int> &arr)
{
    set<int> st;
    for (auto i : arr)
        st.insert(i);
    int ans = 0;
    for (auto i : st)
    {
        if (!st.count(i - 1))
        {
            int streak = 1, num = i;
            while (st.count(num + 1))
            {
                num += 1;
                streak += 1;
            }
            ans = max(ans, streak);
        }
    }
    return ans;
}

int main()
{

    return 0;
}