/* Square root of a number */
#include <iostream>
using namespace std;

int sqrt(int x)
{
    int i = 1;
    while(i*i <= x)
    {
        i++;
    }
    return i-1;
}

int main() {

    cout << sqrt(25);
	return 0;
}
