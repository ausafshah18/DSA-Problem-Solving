/* deleteKey() and decreaseKey() in Binary Heap (Min heap)  */
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
    int extractMin() // removes first element and hepifies
    {
        if(size == 0)
        {
            return INT_MAX; // infinite.
        }
        if(size == 1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        Minheapify(0);
        return arr[size];
    }

    void decreasekey(int i,int x)
    {
        arr[i] = x;
        while(i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[parent(i)],arr[i]);
            i = parent(i); 
        }
    }
    void deleteKey(int i)
    {
        decreasekey(i,INT_MIN); // calling decreaseKey()
        extractMin(); // calling extractMin() after getting the ith element to the 1st position.
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
   h.insert(40);
   h.insert(20);
   h.insert(30);
   h.insert(35);
   h.insert(25);
   h.insert(80);
   h.insert(32);
   h.insert(100);
   h.insert(70);
   h.insert(60);
   h.deleteKey(2); // deleting 30 at index 2.
   h.traverse();
   
    
}