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

LinkedListNode<int> *rev(LinkedListNode<int> *ptr)
{
    LinkedListNode<int> *pre = NULL;
    LinkedListNode<int> *nex = NULL;
    while (ptr)
    {
        nex = ptr->next;
        ptr->next = pre;
        pre = ptr;
        ptr = nex;
    }
    return pre;
}

bool isPalindrome(LinkedListNode<int> *head)
{
    if (head == NULL || head->next == NULL)
        return true;

    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->next = rev(slow->next);
    slow = slow->next;
    LinkedListNode<int> *dummy = head;

    while (slow != NULL)
    {
        if (dummy->data != slow->data)
            return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}

int main()
{

    return 0;
}