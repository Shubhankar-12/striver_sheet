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

Node *findMiddle(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Node *head = new Node(n);
        Node *t = head;
        while (1)
        {
            // int t;
            cin >> n;
            if (n == -1)
                break;
            Node *temp = new Node(n);
            t->next = temp;
            t = t->next;
        }
        Node *mid = findMiddle(head);

        cout << mid->data << endl;
    }

    return 0;
}