/* Implementation of stack using Linked List in c++ */
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

struct mystack
{
    node *head;
    int sz; // size of our stack;
    mystack()
    {
        head = NULL;
        sz = 0;
    }
    void push(int x)
    {
        node *temp = new node(x);
        temp -> next = head;
        head = temp;// after connecting newly added node to head we shift the head pointer backwards.
        sz++;
    }
    int pop()
    {
        if(head == NULL)
        {
            cout << "Stack is empty" << endl;
            return INT_MAX;
        }
        int res = head -> data;
        node *temp = head;
        head = head -> next;
        delete (temp);
        sz--;
        return res;
    }
    int peek()
    {
        if(head == NULL)
        {
            cout <<"Stack is empty"<<endl;
            return INT_MAX;
        }
        return head->data;
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        return (head == NULL);
    }
};

int main()
{
    mystack s;
    s.push(10);
    s.push(20);
    s.push(25);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
}
