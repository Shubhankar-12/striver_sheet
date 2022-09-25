#include <bits/stdc++.h>
using namespace std;

bool findTargetInMatrix(vector<vector<int>> &mat, int m, int n, int t)
{
    int i = 0, j = n - 1;
    while (i < m && j >= 0)
    {
        if (mat[i][j] > t)
            j--;
        else if (mat[i][j] < t)
            i++;
        else
            return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, tar;
        cin >> m >> n >> tar;

        vector<vector<int>> arr;
        for (int i = 0; i < m; i++)
        {
            vector<int> temp;
            for (int i = 0; i < n; i++)
            {
                int t;
                cin >> t;
                temp.push_back(t);
            }
            arr.push_back(temp);
        }
        findTargetInMatrix(arr, m, n, tar) ? (cout << "TRUE" << endl) : (cout << "FALSE" << endl);
    }

    return 0;
}