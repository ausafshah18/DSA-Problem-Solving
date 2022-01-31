/* Number of  1's in a sorted array using Binary Search(iterative) */
#include <iostream>
using namespace std;

int ones(int arr[],int n)
{
    int low = 0, high  = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == 0)
        {
            low = mid+1;
        }
        else
        {
            if(mid == 0 || arr[mid] != arr[mid-1])
                return n-mid;
            else
            {
                high = mid-1;
            }
        }
    }
    return 0;
}

int main() {

    int arr[] = {0,0,0,0,0,0,0}, n = 7;

	cout << ones(arr,n);
	return 0;
}
