#include <bits/stdc++.h>
using namespace std;

int maximumActivities(vector<int> &start, vector<int> &finish)
{
    int count = 0;
    int n = start.size();
    vector<int> indexes(n);
    for (int i = 0; i < n; i++)
        indexes[i] = i;
    sort(indexes.begin(), indexes.end(), [&](int i, int j)
         { return finish[i] < finish[j]; });
    int index = indexes[0];
    for (int i = 1; i < n; i++)
    {
        int ind = indexes[i];
        if (start[ind] >= finish[index])
        {
            index = ind;
            count++;
        }
    }
    return count + 1;
}

int main()
{

    return 0;
}