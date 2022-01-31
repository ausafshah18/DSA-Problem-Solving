/* Sort an array with two types of elements */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void sorting(int arr[],int n)
{
    int i = -1,j = n;
    while(true)
    {
        do
        {
            i++;
        }while(arr[i] < 0);
        do
        {
            j--;
        }while(arr[j] >= 0);

        if(i >= j)
        {
            return;
        }
        swap(arr[i],arr[j]);
    }
}

int main()
{
   int arr[] = {12,-13,15,-90,88},n = 5;
   sorting(arr,n);
   for(int x:arr)
   {
       cout << x << " ";
   }
}

