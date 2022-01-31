/* Deleting the last node of a linked list in c++ */
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

node *dellast(node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    else if(head -> next == NULL)
    {
        delete head;
        return NULL;
    }
    node *temp = head;
    while(temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    delete (temp -> next);
    temp -> next = NULL;
    return head;

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
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head = dellast(head);
    traverse(head);
}
