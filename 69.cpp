/* Printing a matrix in snake pattern problem */
#include <bits/stdc++.h>
#include <vector>
using namespace std;
const int m = 4,n = 4;
void print(int arr[m][n])
{
    for(int i = 0;i < m;i++)
    {
        if(i%2 == 0)
        {
            for(int j = 0;j< n;j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for(int j = 3;j >= 0;j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

 int main()
 {
    int arr[m][n] = {{1 ,2 ,3 ,4},
                     {5 ,6  ,7 ,8},
                     {9 ,10 ,11,12},
                     {13 ,14,15,16}};
    print(arr);
 }
