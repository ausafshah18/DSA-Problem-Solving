/* Search index of element x in a rotated array using Binary search */
#include <iostream>
using namespace std;

int index(int arr[],int n,int x)
{
    int low= 0,high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[low] < arr[mid])
        {
            if(x >= arr[low] && x < arr[mid])
            {
                high = mid-1;
            }
            low = mid+1;
        }
        else if(arr[low] > arr[mid])
        {
            if(x >= arr[mid+1] && x <= arr[high])
            {
                low = mid +1;
            }
            else
            {
                high = mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,20,40,60,5,8},n = 6,x = 5;
    cout << index(arr,n,x);
}
