/* Print N to 1 using Recursion */
#include <iostream>

using namespace std;

void fun(int n)
{
    if(n == 0)
    {
        return;
    }

    cout << n << ends;
    fun(n-1);
}

int main()
{
    int n;
    cout  << "Enter N value: " << endl;
    cin >> n;
    fun(n);
}
