/*  recursively Searching in a singly linked list */
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

int search(node *head,int x)
{
    if(head == NULL)
    {
        return -1;
    }
    if(head -> data == x)
    {
        return 1;
    }
    else
    {
        int res = search(head -> next,x);
        if(res == -1)
        {
            return -1;
        }
        else
        {
            return (res+1); // explanation on copy
        }
    }
}

int main()
{
    node *head = new node(10);
    head -> next = new node(20);
    head -> next -> next = new node(30);
    cout << search(head,30);
}


