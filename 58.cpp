/* meeting the maximum guests */
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

int maxguests(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i = 1,j = 0,curr = 1,res = 1;
    while(i < n && j < n)
    {
        if(arr[i] <= dep[j])
        {
            curr++;i++;
        }
        else
        {
            curr--;j++;
        }
        res = max(curr,res);
    }
    return res;
}

int main()
{
    int arr[] = {900,600,700},dep[] = {1000,800,730},n = 3;
    cout << maxguests(arr,dep,n);
}
