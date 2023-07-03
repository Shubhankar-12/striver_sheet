#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int si, int mid, int ei)
{
    vector<int> temp;
    int i = si, j = mid + 1;
    int cnt = 0;
    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            cnt += (mid - i + 1);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= ei)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int k = si; k <= ei; k++)
    {
        arr[k] = temp[k - si];
    }
    return cnt;
}

int help(vector<int> &arr, int si, int ei)
{
    int cnt = 0;
    if (si >= ei)
    {
        return cnt;
    }
    int mid = (si + ei) / 2;
    cnt += help(arr, si, mid);
    cnt += help(arr, mid + 1, ei);
    cnt += merge(arr, si, mid, ei);
    return cnt;
}

int numberOfInversions(vector<int> &arr, int n)
{
    return help(arr, 0, n - 1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << numberOfInversions(arr, n);

    return 0;
}