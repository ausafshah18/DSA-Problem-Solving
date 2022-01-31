/* Implementation of Open Addressing (Linear Probing method).*/
#include <bits/stdc++.h>
using namespace std;

struct MyHash
{
    int *arr;
    int cap,size;

    MyHash(int c) // constructor.
    {
        cap = c; // capacity
        size = 0;// used in insert.
        arr = new int[cap]; // dynamically allocated memory to array.
        // we will keep empty slots as -1 value and deleted slots as -2 value.
        for(int i = 0;i < cap;i++)
        {
            arr[i] = -1; // making every slot empty
        }
    }
    int hash(int key)
    {
        return key%cap; // calculating index of the array where the key will be placed.
    }

    bool insert(int key) // insrting keys in the array (Hash table)
    {
        int h = hash(key); // getting the index
        int i = h; // we will start iterating from the calculated index onwards.
        while(arr[i] != -1 && arr[i] != -2 && arr[i] != key) // last condition check below
        {
            i = (i+1)%cap; // yai "i" ko aagay aagay bhi lega aur agar end say shuru kiya toh 0 index pe jakar firsay aagay agay layaiga.
        }
        if(arr[i] == key) // means if while linearly probing we found the number to be inserted already in the array.
        {
            return false;
        }
        else // means if we found arr[i] as -1 or -2.
        {
            arr[i] = key;
            size++;
            return true;
        }
    }

    bool search(int key)
    {
        int h = hash(key);
        int i = h;
        while(arr[i] != -1)
        {
            if(arr[i] == key)
            {
                return true;
            }
            i = (i+1)%cap; // means if not found then keep moving forward.
            if(i == h) // matlab agar iterate kartak kartay wapis aagayai usi index pe jidar say shuru kiya tha.
            {
                return false;
            }
        }
        return false; // agar empty space aaye to fail tab nhi hota hai woh present.
    }

    bool erase(int key)
    {
        int h = hash(key);
        int i = h;
        while(arr[i] != -1)
        {
            if(arr[i] == key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i+1)%cap;
            if(i = h)
            {
                return false;
            }
        }
        return false; // agar empty space aaye to fail tab nhi hota hai woh present.
    }
};

int main()
{
    MyHash mh(7);
    mh.insert(56);
    mh.insert(77);
    mh.insert(59);
    if(mh.search(56)==true)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    mh.erase(56);
	    if(mh.search(56)==true)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
}
