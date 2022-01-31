/*stock span problem (naieve soln) */
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {13,15,12,14,16,8,6,4,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0;i < n; i++)
    {
        if(i == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            int j = i-1;
            int count = 1;
            while(arr[j] < arr[i] && j >= 0)
            {
                count++;
                j--;
            }
            cout << count << endl;
        }
    }
    
}