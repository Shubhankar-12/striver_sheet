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

void deleteNode(LinkedListNode<int> *t)
{
    t->data = t->next->data;
    t->next = t->next->next;
    return;
}

int main()
{

    return 0;
}