// Max consecutive 1's in a Binary array
#include <iostream>

using namespace std;

int maxones(int arr[],int n)
{
    int count = 0,tempcount = 0;
    for(int i = 0;i < n;i++)
    {
        if(arr[i] == 1)
        {
            tempcount++;
        }
        else if(arr[i] != 1)
        {
            if(tempcount > count )
            {
                count = tempcount;
            }
            tempcount = 0;
        }
    }
    if(count == 0)
    {
        return tempcount;
    }
    else
    {
        return count;
    }
}
int main()
{

    int arr[6] = {0,1,1,0,1,0};
    cout << maxones(arr,6);
}


