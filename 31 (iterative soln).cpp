/* Index of last occurence of x  in a sorted array using Binary Search(iterative) */
#include <iostream>
using namespace std;

int lastocc(int arr[],int low,int high,int x,int n)
{
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == x)
        {
            if(mid == n-1 || arr[mid] != arr[mid+1]) // yai condition hai last occurence dekhnay kay liyai
            {
                return mid;
            }
            low = mid+1;
        }
        else if(arr[mid] > x)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}



int main() {

    int arr[] = {5,10,10,10,10,20,20}, n = 7;

	int x = 10;

	cout<<lastocc(arr, 0, n - 1, x,n);
	return 0;
}
