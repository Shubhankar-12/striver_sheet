#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int k)
{

    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        int target = k - arr[i];
        int front = i + 1;
        int back = n - 1;

        while (front < back)
        {
            int sum = arr[front] + arr[back];
            if (sum < target)
                front++;
            else if (sum > target)
                back--;
            else
            {
                ans.push_back({arr[i], arr[front], arr[back]});
                int x = arr[front];
                int y = arr[back];

                while (front < back && arr[front] == x)
                    front++;
                while (front < back && arr[back] == y)
                    back--;
            }
        }
        while (i + 1 < n && arr[i] == arr[i + 1])
            i++;
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k;
        cin >> k;
        vector<vector<int>> ans = findTriplets(arr, n, k);
        for (int i = 0; i < ans.size(); i++)
        {
            for (auto j : ans[i])
                cout << j << " ";
            cout << endl;
        }
    }

    return 0;
}