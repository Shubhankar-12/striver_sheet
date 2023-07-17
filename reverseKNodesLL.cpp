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

int lengthLL(Node *head)
{
    Node *t = head;
    int cnt = 0;
    while (t)
    {
        cnt++;
        t = t->next;
    }
    return cnt;
}

// fn
Node *getListAfterReverseOperation(Node *head, int n, int b[])
{
    Node *dum = new Node(INT_MIN);
    dum->next = head;
    Node *pre = dum;
    Node *cur, *nex;
    int len = lengthLL(head);
    int i = 0;
    while (len >= b[i] && i < n)
    {
        cur = pre->next;
        nex = cur->next;
        for (int j = 1; j < b[i]; j++)
        {
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = cur->next;
        }
        pre = cur;
        len -= b[i++];
    }
    return dum->next;
}

int main()
{

    return 0;
}