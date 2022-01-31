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
    if(m.count("good") > 0)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
}
