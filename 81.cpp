/* Count the distinct elements in an array using unordered_set in c++ STL*/
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    int n = 3;
    int arr[n] = {10,11,12};
    unordered_set<int>s;
    for(int i = 0;i < n;i++)
    {
        s.insert(arr[i]);
    }
    cout << s.size();

}
