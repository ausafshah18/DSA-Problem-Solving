/* Basic string functions in C++ String */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    cout << str.length() << " " << endl; // returns length
    str = str+"xyz"; // adds
    cout << str << endl; // returns string
    cout << str.substr(1,3) << endl; // prints a substring  within the string whose chars start from 1 and end at 3.
    cout << str.find("eek") << endl; // find it in the string and returns the index of first 'e'.

}

