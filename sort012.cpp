#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    int i = 0, l = 0, j = n - 1;
    while (l <= j)
    {
        if (arr[l] == 0)
        {
            int temp = arr[l];
            arr[l] = arr[i];
            arr[i] = temp;
            i++;
            l++;
        }
        else if (arr[l] == 1)
        {
            l++;
        }
        else
        {
            int temp = arr[l];
            arr[l] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}