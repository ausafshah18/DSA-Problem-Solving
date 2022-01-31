/* Partition of an array with pivort as arr[p] using Hoare's Partition */
#include <bits/stdc++.h>
using namespace std;

int hoarespartition(int arr[],int p,int low,int high)
{
    int i = low-1,j = high+1;
    while(true)
    {
        do
        {
            i++;
        }while(arr[i] < p);

        do
        {
            j--;
        }while(arr[j] > p);

        if(i >= j)
        {
            return j;
        }
        swap(arr[i],arr[j]);
    }
}
int main()
{
    int arr[] = {70,60,80,40,30},p = arr[0],low = 0,high = 4;
    cout << hoarespartition(arr,p,low,high);
    cout << "\n";
    for(int x:arr)
    {
        cout << x << " ";
    }
}
