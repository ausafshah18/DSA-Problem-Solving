/* First Circular Tour' */
#include <bits/stdc++.h> 
#include <deque>
using namespace std; 

int circular(int petrol[],int dist[],int n)
{
    for(int start = 0;start < n;start++)
    {
        int curr_petrol = 0;
        int end = start;
        while(true)
        {
            curr_petrol  += (petrol[end]-dist[end]);
            if(curr_petrol < 0)
            {
                break;
            }
             end = (end+1)%n; // remember this.
            if(end == start)
            {
                return (start+1);
            }            
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4,8,7,4};
    int brr[] = {6,5,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << circular(arr,brr,n);
}
    