/* Search index of element x in an infinite sized array using Binary search */
#include <iostream>
using namespace std;

int binarysearch(int [],int ,int ,int );
int index(int arr[],int x)
{
   if(arr[0] == x)
   {
       return 0;
   }
   int i = 1;
   while(arr[i] < x)
   {
       i *= 2; // we double the index so that we reduce the time complexity.Once we get arr[i] greater than x we take high as arr[i-1] and low as arr[i/2 - i].
   }
   if(arr[i] == x)
   {
       return i;
   }
   else if(arr[i] > x)
   {
       return binarysearch(arr,x,i/2 +1,i-1);
   }

}
int binarysearch(int arr[],int x,int low,int high)
{
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] > x)
        {
            high = mid-1;
        }
        else if(arr[mid] < x)
        {
            low = mid+1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,40,60,80,100,120,140,160,180,210,240/*so on till infinity*/};
    cout << index(arr,60);
	return 0;
}
