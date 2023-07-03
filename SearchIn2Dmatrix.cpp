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
bool searchMatrix(vector<vector<int>> &mat, int t)
{
    return findTargetInMatrix(mat, mat.size(), mat[0].size(), t);
}
bool searchMatrixNew(vector<vector<int>> &matrix, int target)
{
    int lo = 0;
    if (!matrix.size())
        return false;
    int hi = (matrix.size() * matrix[0].size()) - 1;

    while (lo <= hi)
    {
        int mid = (lo + (hi - lo) / 2);
        if (matrix[mid / matrix[0].size()][mid % matrix[0].size()] == target)
        {
            return true;
        }
        if (matrix[mid / matrix[0].size()][mid % matrix[0].size()] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
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
        searchMatrix(arr, tar) ? (cout << "TRUE" << endl) : (cout << "FALSE" << endl);
    }

    return 0;
}