/* Minimum difference between two elements in an array */
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int mindif(int arr[],int n)
{
    if(n == 1)
    {
        return -1;
    }
    sort(arr,arr+n);
    int count = arr[1] - arr[0];
    for(int i = 0;i < n-1;i++)
    {
        count = min(count,abs(arr[i]-arr[i+1]));
    }
    return count;
}

int main()
{
    int arr[] = {5,8,3},n = 3;
    cout << mindif(arr,n);
}
