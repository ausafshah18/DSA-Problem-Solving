#include <iostream>
// Search operation in arrays
using namespace std;

int fun(int arr[],int n,int x)
{
    for(int i = 0 ;i < n;i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1; // means if x not in array then .
}
int main()
{
    int arr[4] = {20,5,7,25};
    cout << fun(arr,3,5);
}
