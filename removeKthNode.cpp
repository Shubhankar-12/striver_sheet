#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *removeKthNode(Node *head, int K)
{
    Node *start = new Node();
    start->next = head;
    Node *fast = start, *slow = start;
    for (int i = 1; i <= K; i++)
    {
        fast = fast->next;
    }
    while (slow->next && fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return start->next;
}

int main()
{

    return 0;
}