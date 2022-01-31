/*  Heap sort using Binary Heap (Max heap)  */
#include <bits/stdc++.h> 
using namespace std; 

void maxHeapify(int arr[],int n,int i) // it keeps children smaller than the parent.
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if(right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if(largest != i)
    {
        swap(arr[largest],arr[i]);
        maxHeapify(arr,n,largest);
    }
}
void buildheap(int arr[],int n) // we pass  internal node indices to maxheapify
{
    for(int i = n/2-1 ; i >= 0;i--)
    {
        maxHeapify(arr,n,i);
    }
}
void heapsort(int arr[],int n)
{
    for(int i = n-1;i > 0;i--)
    {
        swap(arr[0],arr[i]);
        maxHeapify(arr,i,0); // passing i as size of array allows us to reduce its size;
    }
}

void traverse(int arr[],int n)
{
    for(int i = 0; i< n ;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
  int arr[5] = {100,3,76,22,55}; // this sort is based on max heap so first element shouldbe greatest otherwise o/p will be wrong.
  heapsort(arr,5);
  traverse(arr,5);
}