/* Intersection of two sorted arrays using merge sort algo in c++ */
#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr1[],int arr2[],int n1,int n2)
{
    int i = 0,j = 0;
    while(i < n1 && j < n2)
    {
        if(i > 0 && arr1[i] == arr1[i-1]) // it prevents us from writing the same elements more than once if same elements occur more than once
        {
            i++;
            continue; // means go for next iteration.
        }
        if(j > 0 && arr2[j] == arr2[j-1]) // it prevents us from writing the same elements more than once if same elements occur more than once
        {
            j++;
            continue; // means go for next iteration.
        }
        if(arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";i++;
        }
        else if(arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";i++;j++;
        }
        else
        {
            cout << arr2[j] << " ";j++;
        }
    }
    while(i < n1)
    {
        if(i > 0 && arr1[i] == arr1[i-1]) // it prevents us from writing the same elements more than once if same elements occur more than once
        {
            i++;
            continue; // means go for next iteration.
        }
        cout << arr1[i] << " ";i++;
    }
    while(j < n2)
    {
        if(j > 0 && arr2[j-1] == arr2[j])
        {
            j++;
            continue;
        }
        cout << arr2[j] << " ";j++;
    }
}


int main()
{
    int arr1[] = {3,5,8},n1 = 3;
    int arr2[] = {2,8,9,10,15,15},n2 = 5;
    merge(arr1,arr2,n1,n2);

}
