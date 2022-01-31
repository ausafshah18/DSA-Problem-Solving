/*  Priority queue  */
#include <bits/stdc++.h> 
#include <queue>
using namespace std; 


int main()
{
  priority_queue <int> pq;
  pq.push(10);
  pq.push(15);
  pq.push(11);
  cout << pq.size() << endl;
  cout << pq.top() << endl; // since default priority_queue is MaxHeap so gives top according to that.

  // now we will traverse (We will get elements in sorted (decreasing in maxheap) order)
  while(pq.empty() == false) 
  {
      cout << pq.top() << " ";
      pq.pop();
  } 
}