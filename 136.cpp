/* Implementation of Queue data structure (efficient implementation) */
#include <bits/stdc++.h>
using namespace std;

class myqueue
{
    int cap;
    int *arr;
    int front;
    int sz;
    public: 
    myqueue(int c)
    {
        cap = c;
        arr = new int[cap];
        sz = 0;
        front  = 0;
    }
    void enqueue(int x) // hum 'rear' ka use karkay say karengai add items
    {
        if(isFull()) // if queue is full
        {
            return;
        }
        int rear = getRear(); 
        rear = (rear +1)%cap; // formula hai
        arr[rear] = x;
        sz++;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            return;
        }
        front = (front+1)%cap;
        sz--;
    }
    int getFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return front;
        }
    }
    int getRear()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return ( (front + sz - 1)% cap ); // formula hai
        }
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        return(sz == 0);
    }
    bool isFull()
    {
        return(sz == cap);
    }
};
int main()
{
    myqueue m(4);
    m.enqueue(10);
    m.enqueue(20);
    m.enqueue(30);
    m.enqueue(40);
    cout << m.size() << endl;
    m.dequeue();
    cout << m.size() << endl;
    cout << m.getFront() << endl; // returns index;
    cout << m.getRear() << endl;
    cout << m.isEmpty();
}
