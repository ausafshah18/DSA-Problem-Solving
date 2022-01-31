/*  merge sort algo in c++ */
#include <iostream>
#include <algorithm>
using namespace std;

void mergesort(int [],int ,int );
void merge(int [],int ,int ,int );


void merge(int arr[],int low,int mid,int high)
{

    int n1 = mid-low+1,n2 = high -mid;
    int right[n1],left[n2];
    for(int i = 0;i < n1;i++)
    {
        left[i] = arr[low+i];
    }
    for(int j = 0;j < n2;j++)
    {
        right[j] = arr[mid+1+j];
    }
    int i = 0,j = 0,k = low; // instead of printing we will store the sorted elements back in arr[]using k.
    while(i < n1 && j < n2)
    {
        if(left[i] <= right[j])
        {
            arr[k++] = left[i++]; // it means a[k] = left[i];i++,k++. If we don't write it this way it dosen't run idkw
        }
        else
        {
            arr[k++] = right[j++];
        }
    }
    while(i < n1)
    {
        arr[k++] = left[i++];
    }
    while(j < n2)
    {
        arr[k] = right[j];
        k++,j++;
    }
}
void mergesort(int arr[],int low,int r)
{
    if(r>low)
    {
        int mid = low+(r-low)/2;
        // these recursive calls sort the sub arrays as well as the final array
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,r);
        merge(arr,low,mid,r);
    }
}


int main()
{
    int arr[] = {10,5,30,15,7},n = 5;
    int low = 0,r = 4;
     mergesort(arr,low,r);
     for(int x:arr)
     {
         cout << x << " ";
     }
}
