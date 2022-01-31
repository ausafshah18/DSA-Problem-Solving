/* Basic string functions in C++ String */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    for(int i = 0;i < str.length();i++)
    {
        cout << str[i];
    }
    cout << endl;
    //               OR

    for(char x:str)
    {
        cout << x;
    }

}

