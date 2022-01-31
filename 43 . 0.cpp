/*  merge sort in c++ */
#include <iostream>
#include <algorithm>
using namespace std;
void mergesort(int a[],int b[],int m,int n)
{
    int i = 0,j = 0;
    while(i < m && j< n)
    {
        if(a[i] <= b[j]) // this equality sign is for stability of merge sort.
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while(i < m)
    {
        cout << a[i] << " ";
        i++;
    }
    while(j < n)
    {
        cout << b[j] << " ";
        j++;
    }

}
int main()
{
    int arr1[] = {10,15,20},n1 = 3;
    int arr2[] = {5,6,6,15},n2 = 4;
    mergesort(arr1,arr2,n1,n2);
}
