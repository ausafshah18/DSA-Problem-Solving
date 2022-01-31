/* Middle of linked list */
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

void middle(node *head)
{
    if(head == NULL)
    {
        return ;
    }
    node *slow = head;
    node *fast = head;
    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next; // it moves one step
        fast = fast -> next -> next; //  it moves two steps
    }
    cout << slow -> data;
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
    middle(head);
}
