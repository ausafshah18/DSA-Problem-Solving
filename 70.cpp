/* Matrix boundary Traversal Problem*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int R = 3,C = 2;

void print(int arr[R][C])
{
   if(R == 1)
   {
       for(int i = 0;i < C;i++)
       {
           cout << arr[R-1][i] << " ";
       }
   }
   else if(C == 1)
   {
       for(int i = 0;i < R;i++)
       {
           cout << arr[i][C-1] << " ";
       }
   }
   else if(R > 1 && C > 1)
   {
       int i = 0;
       for(int j = 0;j < C;j++)
       {
           cout << arr[i][j] << " ";
       }
       i = 1;
       while(i < R)
       {
           cout << arr[i][C-1] << " ";
           i++;
       }
       i = R-1;
       for(int k = C-2;k >= 0;k--)
       {
           cout << arr[i][k] << " ";
       }i = R-2;
       int j = 0;
       while(i > 0)
       {
           cout << arr[i][j] << " ";
           i--;
       }
   }
}

 int main()
 {
    int arr[R][C] = {{1,2},
                     {3,4},
                     {5,6}};
    print(arr);
 }
