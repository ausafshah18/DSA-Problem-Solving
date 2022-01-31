/* Segregate even-odd nodes of a linked list */
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

void evenodd(node *head)
{
    node *curr;
    node *eS = NULL, eE = NULL, oS = NULL,oE = NULL; // es = even list ka start,eE = even list ka end,oS = odd list ka start,oE = odd list ka end.
    for(curr = head;curr != NULL;curr = curr -> next)
    {
        int x = curr -> data;
        if(x%2 == 0) // if data is even.
        {
            if(eS == NULL)
            {
                eS = curr;
                eE = eS;
            }
            else
            {
                eE -> next = curr;
                eE = eE -> next;
            }
        }
        else
        {
            if(oS == NULL)
            {
                oS = curr;
                oE = oS;
            }
            else
            {
                oE -> next = curr;
                oE = oE -> next;
            }
        }
    }

    // After for loop
    if(oS == NULL || eS == NULL)
    {
        return head; // matlab jaisay input they linked list waisay he output.
    }
    else
    {
        eE -> next = oS;
        oE -> next = NULL;
        return eS; // even ka start bana head;
    }
}


void traverse(node *head)
{
    if(head == NULL)
    {
        cout << "NULL";
    }
    node *temp = head;
    while(temp != NULL)
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}

int main()
{
    node *head = new node(17);
    head -> next = new node(15);
    head -> next -> next = new node(8);
    head -> next -> next -> next = new node(12);
    head -> next -> next -> next ->  next = new node(10);
    head -> next -> next -> next ->  next -> next = new node(5);
    head -> next -> next -> next ->  next -> next -> next = new node(5);
    evenodd(head);
    traverse(head);
}
