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

bool isPalindrome(LinkedListNode<int> *head)
{
    vector<int> v;
    LinkedListNode<int> *t = head;
    while (t)
    {
        v.push_back(t->data);
    }
    t = head;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (t->data != v[i])
            return false;
        t = t->next;
    }
    return true;
}

int main()
{

    return 0;
}