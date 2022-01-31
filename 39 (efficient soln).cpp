/* Bubble sort in c++ */
#include <iostream>
using namespace std;
void bubble(int arr[],int n)
{
    int temp;
    for(int i = 0;i < n;i++)
    {
        bool swapped = false;
        for(int j = 0;j < n-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }

    for(int i = 0;i < n;i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int arr[] = {1,2,3,6,9,5,7},n = 7;
    bubble(arr,n);
}
