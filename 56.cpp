/* Sorting an array with 3 different types of elements using Dutch National flag Algorithm */
#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int n) // Dutch National flag Algorithm
{
    int low = 0,mid = 0,high = n-1;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[] = {0,2,1,2,0,1},n = 6;
    sort(arr,n);
    for(int x: arr)
	    cout<<x<<" ";
}
