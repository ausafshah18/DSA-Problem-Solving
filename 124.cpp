/* Reverse a linked list */
#include <iostream>
#include <vector>
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

node *rev(node *head)
{
   vector<int>arr;
   for(node *temp = head;temp != NULL;temp = temp->next)
   {
       arr.push_back(temp->data); // putting elements of linked list in the vector.
   }
   for(node *temp = head;temp != NULL;temp = temp->next)
   {
       temp -> data = arr.back(); // vector kay last rear side say ek ek nikal kar linked list kay front side mein bhartay jaao
       arr.pop_back();// saath saath rear elements of vector delete karo taki next ko access karpayai.
   }
   return head;
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
    head -> next -> next = new node(30);
    head -> next -> next -> next = new node(40);
    head -> next -> next -> next -> next = new node(50);
    head = rev(head);
    traverse(head);
}
