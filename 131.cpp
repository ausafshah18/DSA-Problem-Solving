/* Stack traversal in c++ STL */
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(s.empty() == false) // traversal will be in reverse order of insertion.
    {
        cout << s.top() <<endl;
        s.pop();
    }
}
