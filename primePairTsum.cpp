#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> primes(int n)
{
    vector<int> ans(n + 1, 0);
    vector<int> prime;
    for (ll i = 2; i <= n; i++)
    {
        if (ans[i] == 0)
        {
            prime.push_back((int)i);
            for (ll j = i * i; j <= n; j += i)
            {
                ans[(int)j] = 1;
            }
        }
    }

    return prime;
}

vector<vector<int>> findPrimePairs(int n)
{
    vector<int> prime = primes(n);
    vector<vector<int>> ans;
    int i = 0, j = prime.size() - 1;
    while (i <= j)
    {
        if (prime[i] + prime[j] == n)
        {
            ans.push_back({prime[i], prime[j]});
            i++;
            j--;
        }
        else if (prime[i] + prime[j] < n)
            i++;
        else
            j--;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = findPrimePairs(n);
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}