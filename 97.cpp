/* Creating a linked list in c++ */
#include <bits/stdc++.h>
using namespace std;

struct node
{ // everything is public in structure.
    int data;
    node *next; // next is a poinetr variable of type "node" because it points to the next node which is also of the data-type "node".
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

int main()
{
    node *head = new node(20);
    head -> next = new node(30);
    head -> next -> next = new node(40);
}
