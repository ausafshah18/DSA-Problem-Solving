/* Finding the largest element */
#include <iostream>
using namespace std;

void  largest(int arr[],int n)
{
    int largest = arr[0],index;;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] > largest)
        {
            largest  = arr[i];
            index = i;
        }
    }
    cout << index;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    largest(arr,5);
}
