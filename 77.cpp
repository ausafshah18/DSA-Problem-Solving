/* unordered set in c++ STL*/
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int>m; // <key,value> here key is string and value is int
    m["gfg"] = 20; // here gfg is key and 20 is map // these square brackets [] are called member access operators, they return reference to the member.They do one more thing, if the key("gfg" here) is not present then they insert the key themselves.
    m["ide"] = 30;
    m.insert({"courses",15}); // function to insert a key value pair
    for(auto x : m)
    {
        cout << x.first << " " << x.second << endl; //x.first gives gfg and x.second gives 20. Order is random
    }
}
