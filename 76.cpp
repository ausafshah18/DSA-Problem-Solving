/* unordered set in c++ STL*/
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int>s;
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(25);

    for(auto it = s.begin();it != s.end();it++) // running a for loop we created it as short form for iterator.
    {
        cout << (*it) << " "; // syntax.
    }
    cout << endl;
    cout << s.size() << " ";
    s.clear();
    cout << s.size() << " ";
}
