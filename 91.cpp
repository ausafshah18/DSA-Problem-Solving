/* Reversing a string in c++ */
#include <bits/stdc++.h>
using namespace std;

bool stringrev(string &str) // we used & so there is no string copying
{
    string rev = str;
    reverse(rev.begin(),rev.end());
    return (rev == str); // this line of code compares rev and str and if they are same returns true.
}

int main()
{
    string str = "ausaf";
    cout << stringrev(str);
}

