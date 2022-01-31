/* Recursive Traversal of a linked list in c++ */
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void traverse(node *head) // this head is of traverse()
{
    if(head == NULL)
    {
        return ;
    }
    cout << head -> data << " ";
    traverse(head->next);
}

int main()
{
    node *head = new node(10);
    traverse(head);
}
