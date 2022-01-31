/* Inserting a node at the beginning of a linked list in c++ */
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

node *insertbegin(node *head,int x) // head of this function and head to main function are two different pointers pointing to the same location.
{
    node *temp = new node(x);
    temp -> next = head;
    return temp; // address of temp is stored in the "head" of main function
}
void printlist(node *head) // function for printing the values of linked list;
{
        node *curr = head;
        while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
        }
}

int main()
{
    node *head = NULL;
    head = insertbegin(head,10);
    head = insertbegin(head,20);
    head = insertbegin(head,30);
    printlist(head);
}
