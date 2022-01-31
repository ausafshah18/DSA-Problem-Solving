// Window sliding Techinque
#include <iostream>
#include <cmath>
using namespace std;


int window(int arr[], int n,int k)
{
   int maxi = 0;
   for(int i = 0;i < n;i++)
   {
       int cur = 0;;
       for(int j = i;j < i+k;j++)
       {
           cur += arr[j];
       }
       maxi = max(cur,maxi);
   }
   return maxi;
}
int main()
{
    int arr[] = {1,8,30,-5,20,7},n = 6;
    cout << window(arr,n,3);
}
