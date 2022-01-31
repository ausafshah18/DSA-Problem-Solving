/*  Priority queue  */
#include <bits/stdc++.h> 
#include <queue>
using namespace std; 


int main()
{
  priority_queue < int,vector<int>,greater<int> > pq;
  pq.push(10);
  pq.push(15);
  pq.push(11);
  cout << pq.size() << endl;
  cout << pq.top() << endl; // since this priority_queue is MinHeap so gives top according to that.

  // now we will traverse (We will get elements in sorted (increasing) order)
  while(pq.empty() == false) 
  {
      cout << pq.top() << " ";
      pq.pop();
  } 
}