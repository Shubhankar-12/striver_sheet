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

void deleteNode(LinkedListNode<int> *node)
{
    if (!node->next)
    {
        node->data = -1;
        return;
    }
    node->data = node->next->data;
    deleteNode(node->next);
}

int main()
{

    return 0;
}