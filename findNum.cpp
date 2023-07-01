#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int si = 0, ei = n - 1;
    int focc = 0, locc = 0;
    while (si <= ei)
    {
        int mid = (si + ei) / 2;
        if (arr[mid] > t)
            ei = mid - 1;
        else if (arr[mid] < t)
            si = mid + 1;
        else
        {
            focc = mid;
            ei = mid - 1;
        }
    }
    si = 0, ei = n - 1;
    while (si <= ei)
    {
        int mid = (si + ei) / 2;
        if (arr[mid] > t)
            ei = mid - 1;
        else if (arr[mid] < t)
            si = mid + 1;
        else
        {
            locc = mid;
            si = mid + 1;
        }
    }
    if (focc == locc)
        cout << "Single Occurance: " << locc << endl;
    else
        cout << focc << " " << locc;
    return 0;
}