#include <bits/stdc++.h>
using namespace std;

string read(int n, vector<int> arr, int t)
{
    sort(arr.begin(), arr.end());
    int si = 0, ei = n - 1;
    bool find = false;
    while (si < ei)
    {
        if (arr[si] + arr[ei] == t)
        {
            find = true;
            break;
        }
        else if (arr[si] + arr[ei] < t)
            si++;
        else
            ei--;
    }
    return find ? "YES" : "NO";
}

int main()
{

    return 0;
}