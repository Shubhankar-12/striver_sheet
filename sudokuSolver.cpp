#include <bits/stdc++.h>
using namespace std;

bool isValid(int arr[][9], int row, int col, int n)
{
    for (int i = 0; i < 9; i++)
    {
        if (arr[row][i] == n)
            return false;

        if (arr[i][col] == n)
            return false;
        if (arr[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == n)
            return false;
    }
    return true;
}

bool sudokuSolver(int arr[][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] == 0)
            {
                for (int k = 1; k <= 9; k++)
                {
                    if (isValid(arr, i, j, k))
                    {
                        arr[i][j] = k;
                        if (sudokuSolver(arr))
                            return true;
                        else
                            arr[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{

    return 0;
}