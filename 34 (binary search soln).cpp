/* Square root of a number using Binary Search */
#include <iostream>
using namespace std;

int sqrt(int x)
{
    int low = 1,high = x,msq = 1,ans = -1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        msq = mid * mid;
        if(msq == x)
        {
            return mid;
        }
        else if(msq > x)
        {
            high = mid -1;
        }
        else
        {
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}

int main() {

    cout << sqrt(25);
	return 0;
}
