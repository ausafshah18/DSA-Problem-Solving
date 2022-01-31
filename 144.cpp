/* Maimum of all subarrays of size 'k' */
#include <bits/stdc++.h> 
#include <deque>
using namespace std; 

int main()
{
    int k = 3;
    int arr[] = {10,8,5,12,15,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // no.of sub arrays is n-k+1;
    for(int i = 0;i < n-k+1;i++)
    {
        int maximum = arr[i];
        for(int j = i+1;j < i+k;j++)
        {
            maximum = max(maximum,arr[j]);
        }
        cout << maximum << " ";
    }
}
    