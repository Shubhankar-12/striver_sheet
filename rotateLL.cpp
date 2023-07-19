#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

Node *rotate(Node *head, int k)
{
    if (!head || !head->next)
        return head;
    Node *temp = head;
    int len = 1;
    while (temp->next)
    {
        temp = temp->next;
        len++;
    }
    temp->next = head;
    k = k % len;
    int en = len - k;
    while (en--)
    {
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL;
    return head;
}

int main()
{

    return 0;
}