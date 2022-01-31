/* Check if array is sorted */
#include <iostream>
using namespace std;

bool sorted(int arr[],int n)
{
    for(int i = 1;i < n;i++)
    {
        if(arr[i]<arr[i-1])
           {
                return false;
           }
    }
    return true;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    cout << sorted(arr,5);
}
