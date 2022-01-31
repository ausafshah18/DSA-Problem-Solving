/* Implementation of Queue data structure using linked list */
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
struct myqueue
{
    
    node *front;
    int sz;
    node *rear;
    myqueue()
    {
        front = NULL;
        rear = NULL;
        sz = 0;
    }
    void enqueue(int x)
    {
        node *temp = new node(x);
        if(front == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear -> next = temp;
            rear = temp;
        }
        sz++;
    }
    void dequeue()
    {
        if(front == NULL)
        {
            return;
        }
        else
        {
            node *temp = front;
            front = front -> next;
            if(front == NULL)
            {
                rear = NULL;
            }
            delete (temp);
        }
        sz--;
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        return (sz == 0);
    }
    int getFront()
    {
        return front -> data;
    }
    int getRear()
    {
        return rear -> data;
    }
};
int main()
{
    myqueue m;
    m.enqueue(10);
    m.enqueue(20);
    m.enqueue(30);
    cout << m.size() << endl;
    m.dequeue();
    cout << m.size() << endl;
    cout << m.getRear() << endl;
    cout << m.getFront() << endl;
}
