/* rotate a matrix by 90 degrees efficient method.*/
#include <bits/stdc++.h>
using namespace std;
const int n = 4;
void rotated(int arr[n][n]) // we used n,n because square matrix has same rows and columns.
{
    // first we will get the transpose and then we will swap the rows to get the rotated array.
    for(int i = 0;i < n;i++)
    {
        for(int j = i+1;j < n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i = 0;i < n;i++) // i is used for changing columns.
    {
        int low = 0,high = n-1;
        while(low < high)
        {
            swap(arr[low][i],arr[high][i]);
            low++;
            high--;
        }
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[n][n] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    rotated(arr);
}
