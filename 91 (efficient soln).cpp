/* Reversing a string in c++ */
#include <bits/stdc++.h>
using namespace std;

bool stringrev(string &str)
{
    int high = str.length()-1;
    int low = 0;
    while(low < high)
    {
        if(str[low] != str[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main()
{
    string str = "abba";
    cout << stringrev(str);
}

