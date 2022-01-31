/* Printing the elements of a circular linked list */
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
    node *p = head;
    if(head == NULL)
    {
        return;
    }
    do
    {
        cout << p -> data << " ";
        p = p -> next;
    }while(p != head);
}

int main()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next -> next = head;
    traverse(head);
}
