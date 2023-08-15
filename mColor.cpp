#include <bits/stdc++.h>
using namespace std;

bool isSafe(int node, vector<vector<int>> &mat, int n, int m, int col[], int c)
{
    for (int i = 0; i < n; i++)
    {
        if (i != node && mat[i][node] == 1 && col[i] == c)
            return false;
    }
    return true;
}

bool help(int node, vector<vector<int>> &mat, int m, int col[])
{
    int n = mat.size();
    if (node == n)
        return true;
    for (int i = 1; i <= m; i++)
    {
        if (isSafe(node, mat, n, m, col, i))
        {
            col[node] = i;
            if (help(node + 1, mat, m, col))
                return true;
            col[node] = 0;
        }
    }
    return false;
}

string graphColoring(vector<vector<int>> &mat, int m)
{
    int color[m];
    if (help(0, mat, m, color))
        return "YES";
    else
        return "NO";
}

int main()
{

    return 0;
}