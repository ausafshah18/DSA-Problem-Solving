/* Delete head of a doubly linked list */
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

node *del(node *head)
{

    if(head == NULL)
    {
        return NULL;
    }
    if(head -> next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        node *temp = head;
        head = head -> next;
        head -> prev = NULL;
        delete temp;
        return head;
    }
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
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    node *temp3 = new node(40);
    head -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;
    temp2 -> next = temp3;
    temp3 -> prev = temp2;
    head = del(head);
    traverse(head);
}
