/* Inserting elements at the end of a circular linked list */
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
    node *temp = new node(x);
    if(head == NULL)
    {
        temp -> next = temp;
        return temp;
    }
    else
    {
        node *curr = head;
        while(curr -> next != head)
        {
            curr = curr -> next;
        }
        temp -> next = head;
        curr -> next = temp;
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
    head = insertend(head,55);
    traverse(head);
}
