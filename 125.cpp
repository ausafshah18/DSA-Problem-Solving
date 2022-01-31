/* Remove duplicates from sorted singly linked list */
#include <iostream>
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

void duplicate(node *head)
{
    node *curr = head;
    while(curr != NULL && curr -> next != NULL)
    {
        if(curr -> data == curr -> next -> data)
        {
            node *temp = curr -> next;
            curr -> next = curr -> next -> next;
            delete temp;
        }
        else
        {
            curr = curr -> next;
        }
    }
}


void traverse(node *head)
{
    if(head == NULL)
    {
        cout << "NULL";
    }
    node *temp = head;
    while(temp != NULL)
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}

int main()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(20);
    head -> next -> next -> next = new node(30);
    head -> next -> next -> next -> next = new node(30);
    head -> next -> next -> next -> next -> next = new node(30);
    duplicate(head);
    traverse(head);
}
