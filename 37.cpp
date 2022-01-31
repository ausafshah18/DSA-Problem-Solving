/* given a sorted array and a sum,find if there is a pair with given sum */
#include <iostream>
using namespace std;

bool sum(int arr[],int n,int s)
{
    int low = 0,high = n-1;
    while(low < high)
    {
        int sum = arr[low]+arr[high];
        if(sum == s)
        {
            return true;
        }
        else if(sum < s)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;

}
int main()
{
    int arr[] = {2,5,8,12,30},n = 5,s = 17;
     cout << sum(arr,n,s);
}
