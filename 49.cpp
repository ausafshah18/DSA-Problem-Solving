/* Partition of an array with pivort as arr[p] using Lomuto Partition */
#include <bits/stdc++.h>
using namespace std;

int lomutopartition(int arr[],int pivot,int low,int high)
{
    int i = low-1;
    for(int j = low;j < high;j++)  // we iterate t
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
int main()
{
    int arr[] = {70,60,80,40,30},low = 0,high = 4,pivot = arr[high];
    cout << lomutopartition(arr,pivot,low,high);
    cout << "\n";
    for(int x: arr)
	    cout<<x<<" ";
}
