/* Inserting a node at the end of a linked list in c++ */
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

node *insertend(node *head,int x)
{
    node *temp = new node(x); // creating a new node;
    if(head == NULL) // if the new node is the first node in the linked list
    {
        return temp;
    }
    node *curr = head; // we made curr because in traverse() we have to go till the end of linked list (i.e) when head -> next = NULL. So, we don't change the head, head always remains the first element cuz in traverse we will traverse from 1st element to last.
    while(curr -> next!= NULL)
    {
        curr = curr -> next; // going till the end of linked list
    }
    curr -> next = temp; //  adding the newly created node at the nd
    return head; // head will always point to first element.
}
void traverse(node *head)
{
    while(head != NULL)
    {
        cout << head -> data <<" ";
        head = head -> next;
    }
}

int main()
{
    node *head = NULL;
    head = insertend(head,10);
    head = insertend(head,20);
    head = insertend(head,30);
    head = insertend(head,40);
    traverse(head);
}
