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

Node *firstNode(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *fast = head;
    Node *slow = head;
    Node *temp = head;
    while (true)
    {
        if (fast == NULL || fast->next == NULL)
            return NULL;
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            break;
        }
    }
    while (slow != temp)
    {
        temp = temp->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{

    return 0;
}