#include <iostream>
// Search operation in arrays
using namespace std;

int insert(int arr[],int n,int x,int cap,int pos)
{
    if(n == cap)
    {
        return n;
    }
    int idx = pos - 1; // idx means index of element x.
    for(int i = n-1;i >= idx;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[idx] = x;
    return n+1;
}
int main()
{
    int arr[5] = {1,2,3};
    cout << "Before inserting: " << endl;
    for(int i = 0;i < 3;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After inserting: " << endl;
    insert(arr,3,20,5,2);
     for(int i = 0;i < 4;i++)
    {
        cout << arr[i] << " ";
    }
}
