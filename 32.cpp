/* Number of  occurences of x  in a sorted array using Binary Search(iterative) */
#include <iostream>
using namespace std;
int firstocc(int [] ,int ,int );
int lastocc(int [],int ,int );

int occ(int arr[],int x,int n)
{
    int a = firstocc(arr,x,n);
    if(a == -1)
    {
        return 0;
    }
    else
    {
        return (lastocc(arr,x,n) - a + 1);
    }
}
int firstocc(int arr[],int x,int n)
{
    int low = 0,high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] > x)
        {
            high = mid - 1;
        }
        else if(arr[mid] < x)
        {
            low = mid+1;
        }
        else
        {
            if(mid == 0 || arr[mid] != arr[mid-1])
            {
                return  mid;
            }
            else
            {
                high = mid -1;
            }
        }
    }
    return -1;
}
int lastocc(int arr[],int x,int n)
{
    int low = 0,high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] < x)
        {
            low = mid+1;
        }
        else if(arr[mid] > x)
        {
            high = mid-1;
        }
        else
        {
            if(mid == n-1 || arr[mid] != arr[mid+1])
            {
                return mid;
            }
            else
            {
                low = mid+1;
            }
        }
    }
    return -1;
}
int main() {

    int arr[] = {5,10,10,10,10,20,20}, n = 7;

	int x = 20;

	cout << occ(arr,x,n);
	return 0;
}
