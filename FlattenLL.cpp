#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *child;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->child = NULL;
    }
};

Node *flattenLinkedList(Node *head)
{
    Node *t = head;
    Node *c = t;
    while (c->next)
    {
        while (t->child)
        {
            t = t->child;
            if (t->data > c->next->data)
            {
                int temp = t->data;
                t->data = c->next->data;
                c->next->data = temp;
            }
        }
        t->child = c->next;
        c->next = NULL;
        c = t->child;
    }
    return head;
}

int main()
{

    return 0;
}