/* Check for anagram in c++ */
#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
bool anagram(string &s1,string &s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }
    else
    {
        int count[CHAR] = {0};
        for(int i = 0;i < s1.length();i++)
        {
            count[s1[i]]++;
            count[s2[i]]--;
        }

        for(int i = 0;i < CHAR;i++)
        {
            if(count[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    string s1 = "aab";
    string s2 = "bab";
    cout << anagram(s1,s2);
}

