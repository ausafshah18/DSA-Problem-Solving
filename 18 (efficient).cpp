#include <iostream>
// Maximum difference.

using namespace std;

int maxdif(int arr[],int n)
{
   int res = arr[1] - arr[0],minval = arr[0];
   for(int j = 1;j < n;j++)
   {
       res = max(res,arr[j] - minval);
       minval = min(minval,arr[j]);
   }
   return res;
}
int main()
{
    int arr[] = {30,10,8,2};
   cout <<  maxdif(arr,3);
}
