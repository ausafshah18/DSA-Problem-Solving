#include <iostream>
// Remove duplicate elements from a sorted array.
using namespace std;

int  arrt(int arr[],int n)
{
    int res = 1;
    for(int i = 1;i < n;i++)
    {
        if(arr[i] != arr[res-1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[7] = {10,10,20,20,30,30,50};
    arrt(arr,7);
    for(int i = 0;i < 7;i++)
    {
        cout << arr[i] << " ";
    }
}
