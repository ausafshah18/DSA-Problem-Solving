/* Basic string functions in C++ String */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter your name: " << endl;
    getline(cin,str); // if we use cin here it will not take string after space.
    // getline(cin,str,'a') it stops reading when it sees the specified character.
    cout << "Your name is " << str;
}

