/* Index of first occurence of x using Binary Search */
#include <iostream>
using namespace std;

int binarysearch(int arr[],int n,int x)
{
     int low = 0,high = n-1;

    while(low <= high)
    {
        int mid = (low+high)/2;
         if(arr[mid] == x)
         {
             if(mid == 0 || arr[mid - 1] != arr[mid])
             {
                 return mid;
             }
             else
                {
                high = mid-1;
             }

         }
         else if(arr[mid] > x)
        {
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,10,10,10,20,20,40},x = 10,n = 7;
    cout << binarysearch(arr,n,x);
    return 0;
}
