// Max length even-odd  subarray
#include <iostream>

using namespace std;

int maxlen(int arr[],int n)
{
   int result = 1,count = 1;
   for(int i = 0;i < n;i++)
   {
       if((arr[i]%2 == 0 && arr[i+1]%2 != 0)||(arr[i]%2 != 0 && arr[i+1]%2 == 0))
       {
           count++;
           result = max(result,count);
       }

   }
   return result;
}
int main()
{

    int arr[4] = {7,10,13,14};
    cout << maxlen(arr,4);
}


