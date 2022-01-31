/* implementing stack with queue library */
#include <bits/stdc++.h>
#include <queue>
using namespace std;

struct mystack
{
    int sz = 0;
    queue <int> q1,q2;
    
    void push(int x)
    {
        while(q1.empty() == false)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(q2.empty() == false)
        {
            q1.push(q2.front());
            q2.pop();
        }
        sz++;
    }
    int pop()
    {
        q1.pop();
        sz--;
        return q1.front();
    }
    int top()
    {
        return q1.front();
    }
    int size()
    {
        return sz;
    }
};

int main()
{
    mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.size() << endl;
}