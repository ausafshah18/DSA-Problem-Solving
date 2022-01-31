/* Traversing trough a linked list in c++ */
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

void traverse(node *head) // this head is of traverse()
{
    while(head!= NULL)
    {
        cout << (head -> data) << " ";
        head = head ->next;
    }
}

int main()
{
    node *head = new node(20);
    // for the below 2 function calls it might appear as if the second call will not print anything and the output will be 20. But output is "20 20". Reason below
    traverse(head); // this head passed is of main(). Both traverse() and main() function heads point to same location but they are two different variables.
    traverse(head);
}
