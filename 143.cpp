/* Deque in c++ STL */
#include <bits/stdc++.h> 
#include <deque>
using namespace std; 

int main()
{
    deque <int> dq = {10,20,30}; //we can also write deque<int> dq;
    dq.push_front(5);
    dq.push_back(50);
    // traversing a deque
    for(auto x : dq)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << dq.front() << " " << dq.back();
}