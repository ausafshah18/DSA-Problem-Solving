/* Finding the index of 2nd largest */
#include <iostream>
using namespace std;

int larg(int arr[],int n)
{
    int largest = 0, res = -1; // res is second largest index
    for(int i = 1;i < n;i++)
    {
        if(arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest])
        {
            if(res == -1 /*if array is {10,10,2}*/ || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    int arr[4] = {20,33,77,40};
    for(int i = 0;i < 4;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << larg(arr,4);
}
