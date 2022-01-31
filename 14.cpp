#include <iostream>
// Move zeros to end.
using namespace std;

void movezeros(int arr[],int n)
{
    int count  = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main()
{
    int arr[6] = {0,0,0,10,0,10};
    movezeros(arr,6);
    for(int i = 0;i < 6;i++)
    {
        cout << arr[i] << " ";
    }
}
