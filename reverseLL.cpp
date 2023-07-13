#include <bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    if (!head || !head->next)
        return head;
    LinkedListNode<int> *temp = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}

int main()
{

    return 0;
}