/* Left most repeating character */
#include <bits/stdc++.h>
using namespace std;

int left(string &s)
{
    int count = 0;
    for(int i = 0;i < s.length();i++)
    {
        for(int j = i+1;j < s.length();j++)
        {
            if(s[i] == s[j])
            {
                return i;
            }
        }
    }
    return -1;
}


int main()
{
    string s = "egfphqf";

    cout << left(s);
}

