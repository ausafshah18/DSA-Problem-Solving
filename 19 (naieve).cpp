#include <iostream>
// Frequencies in a sorted array.
using namespace std;


void freq(int arr[],int n)
{
    int ele = arr[0],count  = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] == ele)
        {
            count ++;
        }
        else if(arr[i] != ele)
        {
            cout << ele << ":" << count << endl;
            ele = arr[i];
            count = 1;
        }
    }
    cout << ele << ":" << count;
}
int main()
{
    int arr[1] = {10};
    freq(arr,1);
}
