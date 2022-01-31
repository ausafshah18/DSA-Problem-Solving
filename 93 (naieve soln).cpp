/* Check for anagram in c++ */
#include <bits/stdc++.h>
using namespace std;

bool anagram(string &s1,string &s2)
{
    int count = 0;
    if(s1.length() == s2.length())
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return(s1 == s2);
    }
    else
    {
        return false;
    }
}

int main()
{
    string s1 = "aab";
    string s2 = "bab";
    cout << anagram(s1,s2);
}

