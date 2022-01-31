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
    node *temp1 = new node(30);
    node *temp2 = new node(40);
    head -> next = temp1;
    temp1 -> next = temp2;
}
