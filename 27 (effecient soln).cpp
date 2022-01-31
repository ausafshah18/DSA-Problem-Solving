// Window sliding Techinque
#include <iostream>
#include <cmath>
using namespace std;


int window(int arr[], int n,int k)
{
    int currentsum = 0;
   for(int i = 0;i < k;i++)
   {
       currentsum += arr[i];
   }
   int maxsum = currentsum;
   for(int i = k;i < n;i++)
   {
       currentsum += (arr[i] - arr[i-k]);
       maxsum = max(maxsum,currentsum);
   }
   return maxsum;
}
int main()
{
    int arr[] = {1,8,30,-5,20,7},n = 6;
    cout << window(arr,n,3);
}
