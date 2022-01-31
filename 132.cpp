/* Balanced parenthesis in c++ */
#include <bits/stdc++.h>
#include <stack>
using namespace std;

 bool matching(char a,char b)
    {
        return (( a=='(' && b==')' )||( a=='[' && b==']' )||( a=='{' && b=='}' ));
    }
bool isBalanced(string &str)
{
    stack <char> s;
    for(int i = 0;i < str.length();i++)
    {
        if(str[i] == '{' || str[i] == '[' || str[i] == '(')
            {
                s.push(str[i]);
            }
        else
        {
            if(s.empty() == true) // matlab jab opening bracket nhi tha toh fir closing bracket dalnkay toh seedhe he "no" output
            {
                return false;
            }

            if(matching(s.top(),str[i]) == false) // agar closing ka opposite (i.e opening) nhi hai top of stack toh
            {
                return false;
            }
            else
            {
                s.pop(); // agar opening bracket hai top of stack aur closing bracket hai pushed toh pop karengai fir end pe dekhengai ki agar empty raha stack toh matlab balanced hai kyunki fir saray pop hongay.
            }
        }
    }
    return (s.empty() == true);
}
int main()
{
    string str = "{[()]}";
    if (isBalanced(str))
        cout << "Balanced";
    else
        cout << "Not Balanced";
}
