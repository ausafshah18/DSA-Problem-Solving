/* Queue in c++ STL */
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.size() << endl;
    cout << q.front() << " " << q.back() << endl;
    q.pop();
    cout << q.front() << " " << q.back() << endl;
}
