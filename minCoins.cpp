#include <bits/stdc++.h>
using namespace std;

vector<int> MinimumCoins(int n)
{
    // Write your code here
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        while (n >= coins[i])
        {
            n -= coins[i];
            ans.push_back(coins[i]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}