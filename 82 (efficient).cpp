/* frequencies of array elements using hashing */
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void count(int arr[],int n)
{
    unordered_map<int,int>m;
    for(int i = 0;i < n;i++)
    {
        m[arr[i]]++; // check copy to understand this step
    }
    for(auto e:m)
    {
        cout << e.first << " " << e.second << endl;
    }
}

int main()
{
    int n = 8;
    int arr[n] = {10,12,10,15,10,20,12,12};
    count(arr,n);
}
/* if not understood check video "Frequencies of Array elements" */
