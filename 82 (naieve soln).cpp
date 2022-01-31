/* frequencies of array elements */
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void count(int arr[],int n)
{
    // first we will check if it is the first occurrence of the element or not
    for(int i = 0;i < n;i++)
    {
        bool flag = false;
        for(int j = 0;j < i;j++)
        {
            if(arr[i] == arr[j])
            {
                flag = true; // if we found same number on the left we break and do i++
                break;
            }
        }
        if(flag == true) // if we found same no. on the left we used break and now we use continue to do i++
        {
            continue; // if it executes then below written code dosent execute for this iteration
        }
        // below code is for the case if it is the first occurrence of the element
        int freq = 1;
        for(int j = i+1;j < n;j++)
        {
            if(arr[i] == arr[j])
            {
                freq++;
            }
        }
        cout << "freq of " << arr[i] << " = " << freq << endl;
    }
}

int main()
{
    int n = 8;
    int arr[n] = {10,12,10,15,10,20,12,12};
    count(arr,n);
}
/* if not understood check video "Frequencies of Array elements" */
