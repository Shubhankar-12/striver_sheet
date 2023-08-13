#include <bits/stdc++.h>
using namespace std;

void addBoard(vector<vector<int>> &board, vector<vector<int>> &res)
{
    vector<int> temp;
    int n = board.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.push_back(board[i][j]);
        }
    }

    res.push_back(temp);
}

void solve(int col, vector<int> &leftrow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, vector<vector<int>> &board, vector<vector<int>> &ans, int n)
{

    // base case;
    vector<int> temp;
    if (col == n)
    {
        addBoard(board, ans);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (leftrow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0)
        {
            board[row][col] = 1;
            leftrow[row] = 1;
            lowerDiagonal[row + col] = 1;
            upperDiagonal[n - 1 + col - row] = 1;
            solve(col + 1, leftrow, upperDiagonal, lowerDiagonal, board, ans, n);
            board[row][col] = 0;
            leftrow[row] = 0;
            lowerDiagonal[row + col] = 0;
            upperDiagonal[n - 1 + col - row] = 0;
        }
    }
}

vector<vector<int>> solveNQueens(int n)
{

    // Write your code here.
    vector<vector<int>> ans;
    vector<vector<int>> board(n, vector<int>(n, 0));

    vector<int> leftrow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);

    solve(0, leftrow, upperDiagonal, lowerDiagonal, board, ans, n);

    return ans;
}

int main()
{

    return 0;
}