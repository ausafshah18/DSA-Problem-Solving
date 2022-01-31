/* 2D array created using double pointer*/
#include <bits/stdc++.h>

using namespace std;

 int main()
 {
     int m = 3,n = 2;
     int **arr; // double pointer created.
     arr = new int *[m]; // double pointer pointing to an array of pointers.
     for(int i = 0;i < m;i++)// each element of array will point to an array of n items.
     {
         arr[i] = new int[n]; // code upto here creates a 2D array of size m*n.
     }
     for(int i = 0;i < m;i++)
     {
         for(int j = 0;j < n;j++)
         {
             arr[i][j] = 10;
             cout << arr[i][j] << " ";
         }
     }
 }
