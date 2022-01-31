/* Inserting elements at the beginning of a circular linked list */
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

node *insertbegin(node *head,int x)
{

    node *curr = new node(x);
    if(head == NULL)
    {
        head = curr;
        head -> next = head; /* or for lines 22 and 23 write curr ->next = curr */
        return head;
    }
    node *temp = head;
    while(temp -> next != head)
    {
        temp = temp -> next;
    }
    curr -> next = head;
    temp -> next = curr;
    return curr;
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
    head -> next = head;/*
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next -> next = head; */
    head = insertbegin(head,55);
    traverse(head);
}
