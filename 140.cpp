/* Reversing the queue (recursive soln) */
#include <bits/stdc++.h>
#include <queue>
#include <stack>
using namespace std;

void reverse(queue <int> &q)
{
    if(q.empty() == true)
    {
        return;
    }
    int x = q.front();
    q.pop();
    reverse(q);
    q.push(x);
}

int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    reverse(q);
    // printing the elements
    while(q.empty() == false)
    {
        cout << q.front() << " ";
        q.pop();
    }
    
}