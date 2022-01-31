// Min group flips.
#include <iostream>
#include <cmath>
using namespace std;


void minflips(int arr[], int n)
{
    for(int i = 1;i < n;i++)
    {
        if(arr[i] != arr[i-1])
        {
            if(arr[i] != arr[0]) // check video
            {
                cout << "From " << i << " to ";
            }
            else
            {
                cout << i-1 << endl;
            }
        }
    }
    if(arr[n-1] != arr[0]) // check video
    {
        cout << n-1 << endl;
    }
}
int main()
{
    int arr[] = {0,1,1,0,0,1},n = 6;
    minflips(arr,n);
}
