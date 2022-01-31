/* sort in c++ */
#include <iostream>
#include <algorithm>
using namespace std;

struct point
{
    int x,y;
};
bool mycmp(point p1,point p2)
{
    return (p1.x < p2.x);
}
int main()
{
    point arr[] = {{3,10},{2,8},{5,4}}; // n hai after 5,4 waaley jagah.
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,mycmp);
    for(auto i:arr)
    {
        cout << i.x << " " << i.y << endl;
    }
}
