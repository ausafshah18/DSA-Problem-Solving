// Binary Search(Recursive).
#include <iostream>
using namespace std;

int binarysearch(int arr[],int low,int high,int x)
{
     if(low > high)
   {
       return -1;
   }

   int mid = (low+high)/2;
   if(arr[mid] == x)
   {
       return mid;
   }
   else if(arr[mid] < x)
   {
       return binarysearch(arr,mid+1,high,x);
   }
   else
   {
      return binarysearch(arr,low,mid-1,x);
   }

}
int main()
{
    int arr[] = {10,20,30,40,50,60},x = 50,n = 6;
    cout << binarysearch(arr,0,n-1,x);
    return 0;
}
