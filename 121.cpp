/* Sorted insert in a singly linked list */
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

node *sortedinsert(node *head,int x)
{
    node *temp = new node(x);
    if(head == NULL) //  yai condition always fist, else code fails.
    {
        return temp;
    }
    else if(temp -> data < head -> data)
    {
        temp -> next = head;
        return temp;
    }

    else
    {
        node *curr = head;
        while(curr -> next != NULL && curr -> next -> data < temp -> data) // null condition always first.
        {
                curr = curr -> next;
        }
        temp -> next = curr -> next;
        curr -> next  = temp;
        return head;
    }
}

void traverse(node *head)
{
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
    head = sortedinsert(head,30);
    traverse(head);
}
