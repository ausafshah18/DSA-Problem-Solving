/* buildHeap() in Binary Heap (Min heap)  */
#include <bits/stdc++.h> 
using namespace std; 

class Minheap
{
    int *arr;
    int capacity;
    int size;
    public:
    Minheap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }
    int left(int i)
    {
        return (2*i+1);
    }
    int right(int i)
    {
        return (2*i+2);
    }
    int parent(int i)
    {
        return ( (i-1)/2 );
    }
    void insert(int x)
    {
        if(size == capacity)
        {
            return;
        }
        size++;
        arr[size-1] = x;
        for(int i = size-1;i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i],arr[parent(i)]);
            i = parent(i);
        }
    }
    
    void Minheapify(int i)
    {
        int lt = left(i); // index of left child stored in lt
        int rt = right(i);
        int smallest = i;
        // the first 2 if conditions help us find the smallest of the 3 (2 children and one parent)
        if(lt < size && arr[lt] < arr[i]) // first condition checks if lt exists or not;
        {
            smallest = lt;
        }
        if(rt < size && arr[rt] < arr[smallest])
        {
            smallest = rt;
        }
        if(smallest != i)
        {
            swap(arr[i],arr[smallest]); // putting the smallest in the correct place
            Minheapify(smallest);
        }
    }
    
    void buildHeap()
    {   
        for(int i = (size-2)/2; i >= 0;i--)
        {
            Minheapify(i);
        }

    }
   
    void traverse()
    {
        for(int i = 0;i < size;i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
   Minheap h(11);
   h.insert(10);
   h.insert(5);
   h.insert(20);
   h.insert(2);
   h.insert(4);
   h.insert(8);
   h.buildHeap();
   h.traverse();
   
    
}