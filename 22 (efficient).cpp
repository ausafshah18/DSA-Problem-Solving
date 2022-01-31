// Max consecutive 1's in a Binary array.
#include <iostream>

using namespace std;

int maxones(int arr[],int n)
{
   int res = 0,curr = 0;
   for(int i = 0;i < n;i++)
   {
       if(arr[i] == 0)
       {
           curr = 0;
       }
       else
       {
           curr++;
           res = max(curr,res);
       }
   }
   return res;
}
int main()
{

    int arr[6] = {0,1,1,0,1,0};
    cout << maxones(arr,6);
}


