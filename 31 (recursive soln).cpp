/* Index of last occurence of x  in a sorted array using Binary Search(recursive) */
#include <iostream>
using namespace std;

int lastocc(int arr[],int low,int high,int x,int n)
{
    if(low > high)
    {
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid] == x)
    {
       if(mid == n-1 || arr[mid] != arr[mid+1])
          {
             return mid;
          }
          return lastocc(arr,mid+1,high,x,n);

    }
    else if(arr[mid] > x)
    {
        return lastocc(arr,low,mid-1,x,n);
    }
    else
    {
        return lastocc(arr,mid+1,high,x,n);
    }
}



int main() {

    int arr[] = {5,10,10,10,10,20,20}, n = 7;

	int x = 10;

	cout<<lastocc(arr, 0, n - 1, x,n);
	return 0;
}
