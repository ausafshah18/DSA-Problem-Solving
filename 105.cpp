/* Insert a node in a linked list at a given position in c++ */
#include <bits/stdc++.h>
using namespace std;
 //  in a linked list we traverse from index 1 unlinke arrays.
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

node *insert(node *head,int pos,int data)
{
    node *temp = new node(data);
   if(pos == 1) // if the new node has to be put at position 1 then it has to be made the head of linked list also, thats why we return temp.
   {
       temp -> next = head;
       return temp;
   }
   node *curr = head; // curr created for traversing
   for(int i = 1;i <= pos-2 && curr != NULL;i++) // the condition curr != NULL is for the below if()
   {
       curr = curr -> next; // after last iteration it is at position -1;
   }
   if(curr == NULL) // if linked list had 2 nodes and user input is at position 5.
   {
       return head;
   }
   temp -> next = curr -> next; // curr->next is the position.
   curr -> next = temp;
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
    head -> next = new node(30);
    head -> next -> next = new node(50);
    head -> next -> next -> next = new node(70);
    head = insert(head,3,44);
    traverse(head);
}
