/* Partition of an array with pivort as arr[p] */
#include <bits/stdc++.h>
using namespace std;

int naievepartition(int arr[],int n,int p,int low,int high)
{
    int temp[high-low+1],index = 0;
    for(int i = low;i <= high;i++)
    {
        if(arr[i] < arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    } // we didn't make a single sllop for <= arr[p] to maintain stability.
    for(int i = low;i <= high;i++)
    {
        if(arr[i] == arr[p])
        {
            temp[index] == arr[i];
            index++;
        }
    }
    int res = low+index-1;
    for(int i = low;i <= high;i++)
    {
        if(arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for(int i = 0;i <= high;i++)
    {
        arr[i] = temp[i-low];
    }
    for(int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    return res;

}
int main()
{
    int arr[] = {3,8,6,12,10,7},n = 6,p = 5,low = 0,high = 5;
    cout << naievepartition(arr,n,p,low,high);
}
