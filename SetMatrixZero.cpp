#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &arr)
{

    int n = arr.size(), m = arr[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][0] == 0 || arr[0][j] == 0)
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++)
        {
            vector<int> t;
            for (int j = 0; j < m; j++)
            {
                int tp;
                cin >> tp;
                t.push_back(tp);
            }
            arr.push_back(t);
        }
        setZeros(arr);
        for (auto row : arr)
        {
            for (auto i : row)
                cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}