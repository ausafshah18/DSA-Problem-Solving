/* Maximum element of Binary Tree */
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

int maximum(Node *root)
{
    if(root == NULL)
    {
        return INT_MIN; // minus infinity;
    }
    return max( root->key, max( maximum(root -> left),maximum(root -> right) ) );
}  

int main()
{
    Node *root = new Node(10);
    root -> left = new Node(80);
    root -> right = new Node(30);
    root -> right -> right = new Node(50);
    root -> right -> left = new Node(40);
    cout << maximum(root);
}