/* Check if a string is a subsequence of other in c++ */
#include <bits/stdc++.h>
using namespace std;

bool substring(string &s1,string &s2)
{
    int i = 0,j = 0;
    while(i < s1.length())
    {
        if(s2[j] == s1[i])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    return(j == s2.length()); // means if j = size of s2 then return true ,else return false.
}

int main()
{
    string s1 = "ABCDE";
    string s2 = "AE";
    cout << substring(s1,s2);
}

