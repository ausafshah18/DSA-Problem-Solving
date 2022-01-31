/* Transpose of a square matrix Problem*/
#include <bits/stdc++.h>
using namespace std;
const int R = 4,C = 4;

void transpose(int arr[R][C])
{
    int trr[C][R];
    for(int i = 0;i < R;i++)
    {
        for(int j = 0;j < C;j++)
        {
            trr[i][j] = arr[j][i];
        }
    }

    for(int i = 0;i < R;i++)
    {
        for(int j = 0;j < C;j++)
        {
            cout <<  trr[i][j] << " ";
        }
        cout << endl;
    }

}

int main()
{
    int arr[R][C] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    transpose(arr);
}
