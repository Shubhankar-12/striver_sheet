#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<vector<ll>> printPascal(int n)
{
    vector<vector<ll>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<ll> t;
        if (i == 0)
        {
            t.push_back(1);
        }
        else if (i == 1)
        {
            t.push_back(1);
            t.push_back(1);
        }

        else
        {
            int j = 0;
            while (j <= i)
            {
                ll tmp;
                if (j - 1 < 0)
                {
                    tmp = ans[i - 1][j];
                }
                else if (j >= ans[i - 1].size())
                    tmp = ans[i - 1][j - 1];
                else
                    tmp = ans[i - 1][j - 1] + ans[i - 1][j];
                t.push_back(tmp);
                j++;
            }
        }
        ans.push_back(t);
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<ll>> res = printPascal(n);
        for (auto row : res)
        {
            for (auto i : row)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}