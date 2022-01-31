/* union of two arrays using hashing */
#include <bits/stdc++.h>
using namespace std;

int un(int a[],int n1,int b[],int n2)
{
    unordered_set<int>s(a,a+n1);
    for(int i = 0;i < n2;i++)
    {
        s.insert(b[i]);
    }
    return s.size();
}

int main()
{
    int a[] = {3,3,3};
    int n1 = sizeof(a)/sizeof(a[0]);

    int b[] = {3,3};
    int n2 = sizeof(b)/sizeof(b[0]);

    cout << un(a,n1,b,n2);

}

