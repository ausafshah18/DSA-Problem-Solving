/* Implementation of stack using vector in c++ */
#include <bits/stdc++.h>
using namespace std;

struct mystack
{
    vector<int> v;

    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
    }
}; // end of structure.

int main()
{
    mystack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    cout << s.size() << endl;
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.size() << endl;
    cout << s.isEmpty() << endl;
}
