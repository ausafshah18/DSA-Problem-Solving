/* selection sort in c++ */
#include <iostream>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i = 1;i < n;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10,5,8,20,2,18},n = 7;
    insertion(arr,n);
}
