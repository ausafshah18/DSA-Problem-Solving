/* selection sort in c++ */
#include <iostream>
using namespace std;
void selection(int arr[],int n)
{
    for(int i = 0;i < n-1;i++) // last element remaining will be automatically sorted thats why n-1.
    {
        int min_indx = i; // index of minimum element.
        for(int j = i+1;j < n;j++)
        {
            if(arr[j] < arr[min_indx])  // if we get element that min_indx element then we keep min_indx as that number.
            {
                min_indx = j;
            }
            swap(arr[min_indx],arr[i]);  // if i is itselft the min_indx then it will be swapped with itself
        }
    }

    for(int i = 0;i < n;i++)
    {
        cout << arr[i] << " " ;
    }
}
int main()
{
    int arr[] = {10,5,8,20,2,18},n = 7;
    selection(arr,n);
}
