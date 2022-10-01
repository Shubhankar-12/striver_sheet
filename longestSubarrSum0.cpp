#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector<int> arr)
{
    int maxSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int j = i;
        int sum = 0;
        while (j < arr.size())
        {
            sum = sum + arr[j];
            if (sum == 0)
                maxSum = max(maxSum, j - i + 1);
            j++;
        }
    }
    return maxSum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            arr.push_back(t);
        }
        cout << LongestSubsetWithZeroSum(arr) << endl;
    }
    return 0;
}