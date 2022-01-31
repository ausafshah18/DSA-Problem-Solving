/* using double pointer*/
#include <bits/stdc++.h>

using namespace std;

void print(int **arr,int m,int n)
{
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
 int main()
 {
    int **arr;
    int m = 3,n = 2;
    arr = new int*[m]; // double pointer pointing to an array of pointers.
    for(int i = 0;i < m;i++)
    {
        arr[i] = new int[n]; // individual element of array pointing to an array.
        for(int j = 0;j < n;j++)
        {
            arr[i][j] = i; // filling the final array.
            cout << arr[i][j] << " "; // printing the array elements
        }
    }

 }
