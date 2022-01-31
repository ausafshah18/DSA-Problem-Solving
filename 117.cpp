/* Delete head of a circular linked list */
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

node *delhead(node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    else if(head -> next == head)
    {
        delete head;
        return NULL;
    }
    else
    {
       head -> data = head -> next -> data;
       node *temp = head -> next;
       head -> next = head -> next -> next;
       delete temp;
       return head;
    }

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
    head -> next = new node(20);
    head -> next -> next = new node(30);
    head -> next -> next -> next = head;
    head = delhead(head);
    traverse(head);
}
