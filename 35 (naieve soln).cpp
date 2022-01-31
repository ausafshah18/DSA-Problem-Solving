/* Search index of element x in an infinite sized array */
#include <iostream>
using namespace std;

int index(int arr[],int x)
{
    int i=0;
    while(true)
    {
        if(arr[i] == x)
        {
            return i;
        }
        else if(arr[i] > x)
        {
            return -1;
        }
        i++;
    }

}

int main()
{
    int arr[] = {10,40,60,80,100,120,140,160,180,210,240/*so on till infinity*/};
    cout << index(arr,40);
	return 0;
}
