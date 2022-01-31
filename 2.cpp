/* Print 1 to N using Recursion */
#include <iostream>
// Printing numbers from 1 to N using recursion.
using namespace std;

void printtoN(int n)
{
    if(n == 0)
    {
        return;
    }
    printtoN(n-1);
    cout << n << endl;
}
int main()
{
    int n = 4;
    printtoN(4);
}
