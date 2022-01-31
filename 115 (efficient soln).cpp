/* Inserting elements at the beginning of a circular linked list */
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

node *insertbegin(node *head,int x)
{

    node *curr = new node(x);
    if(head == NULL)
    {
       curr -> next = curr;
       return curr;
    }
    else
    {
        curr -> next = head -> next;
        head -> next = curr;
        int t = head -> data; // swapping data of curr and head;
        head -> data = curr -> data;
        curr -> data = t;
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
    head = insertbegin(head,55);
    traverse(head);
}
