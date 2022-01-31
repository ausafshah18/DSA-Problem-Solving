/* Deleting a node at the beginning of a linked list in c++ */
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

node *del(node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    else
    {
        node *temp = head -> next; // we will point temp to the 2nd node;
        delete head;
        return temp; // temp will be stored in head in the main().
    }
}

void traverse(node *head)
{
    if(head == NULL)
    {
        cout << "NULL";
    }
    while(head != NULL)
    {
        cout << head -> data <<" ";
        head = head -> next;
    }
}

int main()
{
    node *head = new node(20);
    head -> next = new node(30);
    head -> next -> next = new node(44);
    head = del(head);
    traverse(head);
}
