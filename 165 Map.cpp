/*  map in c++ STL  */
#include <bits/stdc++.h> 
#include <map>
using namespace std; 

int main()
{
    map <int,int>m;
    m.insert({5,700}); // by default the elements will be stored in increasing order of keys i.e (key,value)
    m[8] = 600; // this is also a way of inserting into the map
    m.insert({9,680});
    for(auto &x : m)
    {
        cout << x.first << " " << x.second << " ";
    }
}