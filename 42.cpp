/*  sort in c++ */
#include <iostream>
#include <algorithm>
using namespace std;
void mergesort(int arr1[],int arr2[],int n1,int n2)
{
    int n = n1+n2,temp[n];
    for(int i = 0;i < n1;i++)
    {
        temp[i] = arr1[i];
    }
    for(int i= 0;i < n2;i++)
    {
        temp[i+n1] = arr2[i];
    }
    sort(temp,temp+n);
    for(int i =0;i < n;i++)
    {
        cout << temp[i] << " ";
    }

}
int main()
{
    int arr1[] = {10,15,20},n1 = 3;
    int arr2[] = {5,6,6,15},n2 = 4;
    mergesort(arr1,arr2,n1,n2);
}
