#include <iostream>
// Left rotation of an array by d places

using namespace std;
void reversal(int[],int,int);
void leftrotation(int arr[],int n,int d)
{
    reversal(arr,0,d-1);
    reversal(arr,d,n-1);
    reversal(arr,0,n-1);
}
void reversal(int arr[],int low,int high)
{
    while(low < high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    leftrotation(arr,5,2);
    for(int i = 0;i < 5;i++)
    {
        cout << arr[i] << " ";
    }
}
