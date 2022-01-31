/*Implement two stacks in an array (efficient soln) */
#include <iostream>
using namespace std;
struct mystack
{
    int cap;
    int *arr;
    int top1;
    int top2;
    int sz1 = 0;
    int sz2 = 0;

    mystack(int c)
    {
        cap = c;
        arr = new int[cap];
        top1 = -1;
        top2 = cap;
        
    }
    void push1(int x)
    {
        if(top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
            sz1++;
        }
    }
    void push2(int x)
    {
        if(top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
            sz2++;
        }
    }
    int pop1()
    {
         if(top1 >= 0)
         {
             int x = arr[top1];
             top1--;
             sz1--;
             return x;
         }
         return -1;
    }
    int pop2()
    {
        if(top2 < cap)
        {
            int x = arr[top2];
            top2--;
            sz2--;
            return x;
        }
        return -1;
    }
    int size1()
    {
        return sz1;
    }
    int size2()
    {
        return sz2;
    }
};
int main()
{
    mystack m(6);
    m.push1(10);
    m.push1(20);
    m.push2(30);
    m.push2(40);
    cout << m.size1() << endl;;
    cout << m.pop1() << endl;
    cout << m.pop2() << endl;
    cout << m.size2() << endl;
}