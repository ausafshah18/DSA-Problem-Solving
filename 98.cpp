/* Traversing trough a linked list in c++ */
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

void traverse(node *head)
{
    node *curr = head;
    while(curr!= NULL)
    {
        cout << (curr -> data) << " ";
        curr = curr ->next;
    }
}

int main()
{
    node *head = new node(20);
    head -> next = new node(30);
    head -> next -> next = new node(40);

    traverse(head);
}
