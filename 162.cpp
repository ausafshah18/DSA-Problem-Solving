/* Floor in BST  */
#include <bits/stdc++.h> 
using namespace std; 
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        right = left = NULL;
    }
};

Node  *floor(Node *root,int x)
{
    Node *temp = NULL;
    while(root != NULL)
    {
        if(root -> key == x)
        {
            return root;;
        }
        if(root -> key < x)
        {
            
                temp = root;
            
            root = root -> right;
        }
        else if(root -> key > x )
        {
            root = root -> left;
        }
    }
    return temp;
}


int main()
{
    Node *root = new Node(50);
    root -> left = new Node(30);
    root -> left -> right = new Node(40);
    root -> left -> left  = new Node(20);
    root -> right = new Node(70);
    root -> right -> right = new Node(80);
    root -> right -> left = new Node(60);
    root -> right -> left -> right = new Node(65);
    root -> right -> left -> left = new Node(55);
    cout<<"Floor: "<<(floor(root,58)->key);
}