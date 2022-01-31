/*  merge sort in c++ */
#include <iostream>
#include <algorithm>
using namespace std;
void mergesort(int arr[],int low,int mid,int high)
{
    int n1 = mid-low+1,n2 = high - mid;
    int right[n1],left[n2];
    for(int i = 0;i < n1;i++)
    {
        left[i] = arr[low+i];
    }
    for(int j = 0;j < n2;j++)
    {
        right[j] = arr[mid+1+j];
    }
    int i = 0,j = 0,k = 0; // instead of printing we will store the sorted elements back in arr[] using k.
    while(i < n1 && j < n2)
    {
        if(left[i] <= right[j])
        {
            arr[k] = left[i];
            i++,k++;
        }
        else
        {
            arr[k] = right[j];
            k++,j++;
        }
    }
    while(i < n1)
    {
        arr[k] = left[i];
        k++,i++;
    }
    while(j < n2)
    {
        arr[k] = right[j];
        k++,j++;
    }
    for(int i = 0;i < high+1;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10,15,20,11,30};
     mergesort(arr,0,2,4);
}
