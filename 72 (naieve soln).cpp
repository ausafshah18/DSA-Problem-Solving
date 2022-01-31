/* rotate a matrix by 90 degrees*/
#include <bits/stdc++.h>
using namespace std;
const int n = 4;
void rotated(int arr[n][n]) // we used n,n because square matrix has same rows and columns.
{
    int trr[n][n];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            trr[n-1-j][i] = arr[i][j]; // make a matrix on copy and apply this on rough to understand the working
        }
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout << trr[i][j] << " ";
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
