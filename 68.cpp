/* using vector of vectors*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void print(vector < vector<int> > &arr) // we used & for optimization
{
    for(int i = 0;i < arr.size();i++) // arr.size() gives no.of rows.
    {
        for(int j = 0;j < arr[i].size();j++) // arr[i].size() gives no.of columns
        {
            cout << arr[i][j] << " ";
        }
    }
}
 int main()
 {
    int m = 3,n = 2;
    vector < vector<int> > arr;
    for(int i = 0;i < m;i++)
    {
        vector<int> v;
        for(int j = 0;j < n;j++)
        {
            v.push_back(i);
        }
        arr.push_back(v);
    }
    print(arr);
 }
