/* K th smallest element in an array using Quick Sort (Lomuto Partition) */
#include <bits/stdc++.h>
using namespace std;

int lomuto(int arr[],int l,int h)
{
    int i = l-1;
    int pivot = arr[h];
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

int kthsmallest(int arr[],int h,int k)
{
    int low = 0,high  = h;
    while(low <= high)
    {
        int p = lomuto(arr,low,high); // we wont make recursive calls like qsort() because the way we'll do will sort only that part of array that is required for solving.If we do sort the whole array and then print that element it will increase time.
        // It is similar do Binary Search
        if(p == k-1)
        {
            return k-1;
        }
        else if(p > k-1)
        {
            high = p-1;
        }
        else
        {
            low = p+1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,5,30,12},k,n = 4;
    cout << "Enter K value: " << endl;
    cin >> k;
    int index = kthsmallest(arr,n-1,k);
    cout << arr[index];
}

