/* Implementing dequeue using Array (simple implementation) */
#include <bits/stdc++.h> 
using namespace std; 

struct dequeue
{
    int *arr;
    int cap;
    int sz;

    dequeue(int c)
    {
        cap = c;
        arr = new int[cap];
        sz = 0;
    }
    void insertFront(int x)
    {
        if(isFull())
        {
            return;
        }
        if(sz == 0)
        {
            arr[sz] = x;
        }
        else
        {
            for(int i = sz; i >= 0; i--)
            {
                arr[i+1] = arr[i];
            }
            arr[0] = x;
        }
        sz++;
    }
    void insertRear(int x)
    {
        if(isFull())
        {
            return;
        }
        arr[sz] = x;
        sz++;
    }
    int deleteFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        int x = arr[0];
        for(int i = 1;i <= sz;i++)
        {
            arr[i-1] = arr[i];
        }
        sz--;
        return x;
    }
    int deleteRear()
    {
        if(isEmpty())
        {
            return;
        }
        int x = arr[sz-1];
        sz--;
        return x;
    }
    int getFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[0];
    }
    int getRear()
    {
        if(isEmpty())
        {
            return -1;
        }
        return arr[sz-1];
    }
    int size()
    {
        return sz;
    }
    bool isFull()
    {
        return (sz == cap);
    }
    bool isEmpty()
    {
        return(sz == 0);
    }
};
int main()
{
    dequeue dq(5);
    dq.insertFront(10);
    dq.insertFront(30);
    dq.insertFront(50);
    dq.insertRear(40);
    dq.insertRear(20);
    cout << dq.getFront() << endl;
    cout << dq.getRear() << endl;
    cout << dq.deleteRear() << endl;
    cout << dq.deleteFront() << endl;
    cout << dq.getFront() << endl;
    cout << dq.getRear() << endl;
    cout << dq.size() << endl;
    cout << dq.isFull() << endl;
    cout << dq.isEmpty() << endl;
}