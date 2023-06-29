#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node *nthNode(node *head, int n)
{
    int len = 0;
    node *temp = head;
    while (len != n || !temp)
    {
        temp = temp->next;
        len++;
    }
    return temp;
}

int main()
{

    return 0;
}