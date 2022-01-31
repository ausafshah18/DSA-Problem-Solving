/* Quick Sort using Hoare's Partition */
#include <bits/stdc++.h>
using namespace std;

int hoarespartition(int [],int ,int );

void qsort(int arr[],int l,int h)
{
    if(l < h)
    {
        int p = hoarespartition(arr,l,h); // hoares partition return J which we put into P and treat as pivot.
        qsort(arr,l,p); // here high is not p-1 like in qsort with lomuto because in hoares partition pivot is not according to ascending order and J is returned.
        qsort(arr,p+1,h);
    }
}

int hoarespartition(int arr[],int l,int h)
{
    int i = l-1;
    int j = h+1,pivot = arr[l];
    while(true)
    {
        do
        {
            i++;
        }while(arr[i] < pivot);

        do
        {
            j--;
        }while(arr[j] > pivot);

        if(i >= j)
        {
            return j;
        }
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int arr[] = {8,4,7,9,3,10,5}, n = 7,l = 0;
    qsort(arr,l,n-1);
    for(int x:arr)
    {
        cout << x << " ";
    }
}

