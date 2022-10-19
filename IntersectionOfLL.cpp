#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int findIntersection(Node *h1, Node *h2)
{
    Node *d1 = h1;
    Node *d2 = h2;

    while (d1 != d2)
    {
        d1 = d1 == NULL ? h2 : d1->next;
        d2 = d2 == NULL ? h1 : d2->next;
    }
    if (d1 != NULL)
        return d1->data;
    else
        return -1;
}

int main()
{

    return 0;
}