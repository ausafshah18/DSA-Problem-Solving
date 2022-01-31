/* Print Nodes at distance 'K' */
#include <bits/stdc++.h> 
using namespace std; 

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        right = left = NULL;
    }
};

void printkDist(node *root,int k)
{
    if(root == NULL)
    {
        return;
    }
    if(k == 0)
    {
        cout << root -> key << " ";
    }
    else
    {
        printkDist(root -> left,k-1);
        printkDist(root -> right,k-1);
    }
}

int main()
{
    node *root = new node(10);
    root -> left = new node(20);
    root -> left -> left = new node(40);
    root -> left -> right = new node(50);
    root -> right = new node(30);
    root -> right -> right = new node(70);
    root -> right -> right -> right = new node(80);
    printkDist(root,2);
}