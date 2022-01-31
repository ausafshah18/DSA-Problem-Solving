/* K th smallest element in an array */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int kthsmallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}

int main()
{
    int arr[] = {10,5,30,12},k,n = 4;
    cout << "Enter K value: " << endl;
    cin >> k;
    cout << kthsmallest(arr,n,k);
}

