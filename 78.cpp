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
    if(m.find("good") != m.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    // or
    /* auto it = m.find("good");
       if(it != m.end())
       {
            cout << it->second // printing the value.
       }
    */
    for(auto it = m.begin();it != m.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}
