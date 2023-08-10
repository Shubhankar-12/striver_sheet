#include <bits/stdc++.h>
using namespace std;

string kthPermutation(int n, int k)
{
    vector<int> arr;
    string ans;
    int fact = 1;
    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
        arr.push_back(i);
    }
    arr.push_back(n);
    k = k - 1;
    while (true)
    {
        ans = ans + to_string(arr[k / fact]);
        arr.erase(arr.begin() + k / fact);
        if (arr.size() == 0)
            break;
        k = k % fact;
        fact = fact / arr.size();
        // cout << "k " + to_string(k) + " f " + to_string(fact) + "\n";
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << kthPermutation(n, k);
    return 0;
}