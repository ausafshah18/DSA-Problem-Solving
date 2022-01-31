/* Reverse a doubly linked list */
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data=x;
        next=NULL;
        prev = NULL;
    }
};

node * reverse(node *head)
{
    if(head == NULL || head -> next == NULL) // corner cases if there is only one node or no nodes t all.
    {
        return head;
    }
    node *prev = NULL; // used in swapping
    node *curr = head; // used in swapping and moving forward
    while(curr != NULL) // till we reach NULL.
    {
        // below "3" line are old school swapping like in bubble sort(in C).
        prev = curr -> prev; // curr -> prev means pointer to previous node. And "prev" is the newly creatd variable.
        curr -> prev = curr -> next; // swapping ->next & -> prev because in the reversed array the prev and next of all nodes will be reverse of the original array
        curr -> next = prev; // swapping complete
        curr = curr -> prev; // moving  forward in original array
    }
    return prev -> prev; // In the last step prev -> prev means "2nd last node ->next = last node". Last node becomes the first of original one.
}

void traverse(node *head)
{
    node *curr = head;
    while(curr != NULL)
    {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}

int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    node *temp3 = new node(40);
    head -> next = temp1;
    temp1 -> prev = head;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;
    temp2 -> next = temp3;
    temp3 -> prev = temp2;
    head = reverse(head);
    traverse(head);
}
