/* Reversing an array */

#include <iostream>
using namespace std;

void revers(int arr[],int n)
{
    int low = 0, high  = n-1,temp;
    while(low < high)
    {
        temp = arr[low];
        arr[low]  = arr[high];
        arr[high] = temp;
        high --;
        low ++;
    }
}
int main()
{
    int arr[4] = {1,2,3,4};
    cout << "Before reversing: " << endl;
    for(int i = 0;i < 4;i++)
    {
        cout << arr[i];
    }
    revers(arr,4);
    cout << endl;
    cout << "After reversing: " << endl;
    for(int i = 0;i < 4;i++)
    {
        cout << arr[i];
    }
}
