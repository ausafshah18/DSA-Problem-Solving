/* Delete a node in a linked list with only pointer given to it */
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

void del(node *ptr)
{
    node *temp = ptr -> next;
    ptr -> data = temp -> data;
    ptr -> next = temp -> next;
    delete temp;
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
    head -> next -> next = new node(30);
    node *ptr = head -> next -> next;
    head -> next -> next -> next = new node(40);
    del(ptr);
    traverse(head);
}
