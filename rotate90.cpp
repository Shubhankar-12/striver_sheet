#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // same as spiral print
    int left = 0, right = m - 1, top = 0, bottom = n - 1;

    while (left < right && top < bottom)
    {
        int temp = mat[top][left];
        for (int col = left + 1; col <= right; col++)
            swap(mat[top][col], temp);
        top++;

        for (int row = top; row <= bottom; row++)
            swap(mat[row][right], temp);
        right--;

        for (int col = right; col >= left; col--)
            swap(mat[bottom][col], temp);
        bottom--;

        for (int row = bottom; row >= top; row--)
            swap(mat[row][left], temp);
        left++;

        mat[top - 1][left - 1] = temp;
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
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        rotateMatrix(arr, n, m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}