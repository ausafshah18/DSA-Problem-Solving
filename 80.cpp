/* unordered_map in c++ STL*/
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int>m;
    m["gfg"] = 20;
    m["courses"] = 30;
    m["good"] = 35;
    m["ide"] = 55;
    cout << m.size() << endl; // it returns the no.of key-value pairs.
    m.erase("ide"); // it will remove ide - 55 pair.
    //we can pass functions to erase().
    m.erase(m.begin()); // it removes the first pair.
    cout << m.size() << endl;
}
