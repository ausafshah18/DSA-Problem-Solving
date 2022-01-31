/* Insert at end of a doubly linked list */
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data=x;
        next=NULL;
        prev = NULL;
    }
};

node *insertend(node *head,int x)
{
    node *temp = new node(x);
    if(head == NULL)
    {
        return temp;
    }
    node *curr = head;
    while(curr -> next != NULL)
    {
        curr = curr -> next;
    }
    curr -> next = temp;
    temp -> prev  = curr;
    return head;
}

void traverse(node *head)
{
    node *curr = head;
    while(curr != NULL)
    {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}

int main()
{
    node *head = NULL;
    head = insertend(head,10);
    head = insertend(head,20);
    traverse(head);
}
