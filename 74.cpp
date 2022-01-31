/* Implementation of chaining.*/
#include <bits/stdc++.h>
using namespace std;

struct MyHash
{
    int Bucket;
    list <int> *table;
    MyHash(int b)
    {
        Bucket = b;
        table = new list <int> [Bucket];
    }
    void insert(int k)
    {
        int i = k % Bucket;
        table[i].push_back(k);
    }
    bool search(int k)
    {
        int i = k % Bucket;
        for(auto x:table[i])
        {
            if(x == k)
            {
                return true;
            }
        }
        return false;
    }
    void remove(int k)
    {
        int i = k % Bucket;
        table[i].remove(k);
    }
};

int main()
{
    MyHash mh(7);
    mh.insert(50);
    mh.insert(25);
    mh.insert(33);
    mh.insert(7);
    cout << mh.search(50) << endl;
    mh.remove(33);
    cout << mh.search(33);
}
// if you don't understand then check video with same heading.
