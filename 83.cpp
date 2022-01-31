/* Distinct intersections of two arrays  */
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void count(int a[],int n1,int b[],int n2)
{
    int intersection = 0;
    // we first check if the element in a[] has this as its first occurrence by checking elements behind it.
    for(int i = 0;i < n1;i++)
    {
        bool flag = false;
        for(int j = 0;j < i;j++)
        {
            if(a[i] == a[j])
            {
                flag = true;
                break;
            }
        }
        if(flag == true)
        {
            continue; // we used break and now we use this so that i++ can happen.
        }
        // now if this is the first occurrence we check it with every element of b[] and once we find intersection we break cuz we need intersections that are different.
        for(int j = 0;j < n2;j++)
        {
            if(a[i] == b[j])
            {
                intersection++;
                break;
            }
        }
    }
    cout << intersection;
}

int main()
{
    int n1 = 3,n2 = 3;
    int a[n1] = {10,10,10}; // only one distinct intersection cuz all 3 are same no.s
    int b[n2] = {10,10,10};
    count(a,n1,b,n2);
}

