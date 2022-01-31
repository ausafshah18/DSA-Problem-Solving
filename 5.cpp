#include <iostream>
// Sum of digits using recursion .
using namespace std;
// MY Code:
int sum1 = 0;
int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    sum1 += n%10;
    sum(n/10);
    return sum1;
}
int main()
{
    cout << sum(555);
}


