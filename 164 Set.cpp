/* Storing elements in increasing order (Set in c++ STL)  */
#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    set <int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for(int x : s)
    {
        cout << x << " ";
    }
}