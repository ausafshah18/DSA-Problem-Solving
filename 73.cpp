/* Spiral traversal of a matrix.*/
#include <bits/stdc++.h>
using namespace std;
const int R = 2, C = 3;
void spiral(int arr[R][C])
{
    int top = 0,bottom = R-1,left = 0,right = C-1;
    while(top <= bottom && right >= left)
    {
        for(int i = left;i <= right;i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;
        for(int i = top;i <= bottom;i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;
        for(int i = right;i >= left;i--)
        {
            cout << arr[bottom][i] << " ";
        }
        bottom--;
        for(int j = bottom;j >= top;j--)
        {
            cout << arr[j][left] << " ";
        }
        left++;
    }
}

int main()
{
    int arr[R][C] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};

    spiral(arr);
}
