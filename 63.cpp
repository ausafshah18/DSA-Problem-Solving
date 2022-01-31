/* 2D array created using vector of vectors*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

 int main()
 {
     int m = 3,n = 2;
     vector < vector<int> >arr; // creating a vector of vectors.
     for(int i = 0;i < m;i++)
     {                            // now we will create each vector and push it to the vector of vectors.
         vector <int> v;
         for(int j = 0;j < n;j++)
         {
             v.push_back(10); // pushing elements to individual vectors
         }
         arr.push_back(v); // pushing the created vector to the vector of vectors
     }
       // Printing of this 2D array has a little different code given below:-
     for(int i = 0;i < arr.size();i++)
     {
         for(int j = 0; j < arr[i].size();j++)
         {
             cout << arr[i][j] << " ";
         }
     }
 }
