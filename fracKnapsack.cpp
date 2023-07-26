#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    double r1 = (double)a.second / (double)a.first;
    double r2 = (double)b.second / (double)b.first;
    return r1 > r2;
}

double maximumValue(vector<pair<int, int>> &arr, int n, int w)
{
    // ITEMS contains {weight, value} pairs
    sort(arr.begin(), arr.end(), cmp);
    int curWeight = 0;
    double finalvalue = 0.0;

    for (int i = 0; i < n; i++)
    {

        if (curWeight + arr[i].first <= w)
        {
            curWeight += arr[i].first;
            finalvalue += arr[i].second;
        }
        else
        {
            int remain = w - curWeight;
            finalvalue += (arr[i].second / (double)arr[i].first) * (double)remain;
            break;
        }
    }

    return finalvalue;
}

// w= 200-120=80
// ans= 0 -> 100

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i].first;
        for (int i = 0; i < n; i++)
            cin >> arr[i].second;

        cout << maximumValue(arr, n, w) << endl;
    }

    return 0;
}