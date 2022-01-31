/* Quick Sort using Lomuto Partition */
#include <bits/stdc++.h>
using namespace std;

int lomutopartition(int [],int ,int );

void qsort(int arr[],int l,int h)
{
    if(l < h)
    {
        int p = lomutopartition(arr,l,h);
        qsort(arr,l,p-1);
        qsort(arr,p+1,h);
    }
}

int lomutopartition(int arr[],int l,int h)
{
    int i = l-1,pivot = arr[h];
    for(int j = l;j < h;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

int main()
{
    int arr[] = {8,4,7,9,3,10,5},l = 0,n=7;
    qsort(arr,l,n-1);
    for(int x:arr)
    {
        cout << x << " ";
    }
}
