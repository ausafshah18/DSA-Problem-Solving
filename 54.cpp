/* Chocolate Distribution Problem using sorting techinque */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int distribute(int arr[],int n,int m)
{
    int i = 0;
    sort(arr,arr+n);
    int count = arr[i+m-1] - arr[i];
        for(i = 0;i+m-1 < n;i++) // here i+m-1 is the third element after i = 0.
            {
                count = min(count,arr[i+m-1]-arr[i]);
            }

    return count;
}
int main()
{
    int arr[] = {7,3,2,4,9,12,56},n = 7,m = 3;
    cout << distribute(arr,n,m);
}

