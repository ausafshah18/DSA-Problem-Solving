#include <iostream>
// Leaders in an array.

using namespace std;

void leader(int arr[],int n)
{
   int lead = arr[n-1];
   cout << lead << " ";
   for(int i = n-2;i >= 0;i--)
   {
       if(arr[i] > lead)
       {
           lead = arr[i];
           cout << arr[i] << " ";
       }
   }
}
int main()
{
    int arr[6] = {1,10,5,8,9,2};
    leader(arr,6);
}
