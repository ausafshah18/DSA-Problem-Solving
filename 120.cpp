/* Insert at the end of a circular doubly linked list */
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

node *insertend(node *head,int x)
{
    node *temp = new node(x);
    if(head == NULL)
    {
        temp -> next = temp;
        temp -> prev = temp;
        return temp;
    }

    temp -> next = head;
    temp -> prev = head -> prev;
    head -> prev -> next = temp;
    head -> prev = temp;
    return head;
}

void traverse(node *head)
{
    node *temp = head;
    do
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }while(temp != head);
}

int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    node *temp3 = new node(40);
    head -> next = temp1;
    head -> prev = temp3;
    temp1 -> next = temp2;
    temp1 -> prev = head;
    temp2 -> prev = temp1;
    temp2 -> next = temp3;
    temp3 -> prev = temp2;
    temp3 -> next = head;
    head = insertend(head,5);
    traverse(head);
}
