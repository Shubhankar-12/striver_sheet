#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *random;
    Node() : data(0), next(nullptr), random(nullptr){};
    Node(int x) : data(x), next(nullptr), random(nullptr) {}
    Node(int x, Node *next, Node *random) : data(x), next(next), random(random) {}
};

Node *cloneLL(Node *head)
{
    Node *t = head;
    while (t)
    {
        Node *newNode = new Node(t->data);
        newNode->next = t->next;
        t->next = newNode;
        t = t->next->next;
    }
    t = head;
    while (t)
    {
        if (t->random)
            t->next->random = t->random->next;
        t = t->next->next;
    }
    Node *dumm = new Node();
    Node *itr = head;
    t = dumm;
    Node *f;
    while (itr)
    {
        f = itr->next->next;
        t->next = itr->next;
        itr->next = f;
        t = t->next;
        itr = f;
    }
    return dumm->next;
}

int main()
{

    return 0;
}