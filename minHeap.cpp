#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

void insertinheap(vector<int> &heap, int ele)
{

    heap.push_back(ele);

    int ci = heap.size() - 1;

    while (ci > 0)
    {

        int pi = (ci - 1) / 2;

        if (heap[ci] < heap[pi])
        {

            swap(heap[ci], heap[pi]);
        }
        else
        {

            break;
        }

        ci = pi;
    }
}

vector<int> minHeap(int n, vector<vector<int>> &q)
{

    vector<int> heap;

    vector<int> ans;

    for (int i = 0; i < q.size(); i++)
    {

        if (q[i][0] == 0)
        {

            insertinheap(heap, q[i][1]);
        }
        else
        {

            int removed = removemin(heap);

            ans.push_back(removed);
        }
    }

    return ans;
}
int main()
{

    return 0;
}