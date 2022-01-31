/* insert operation in BST (Recursive) */
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
Node *insert(Node *root,int x)
{
    if(root == NULL)
    {
        return new Node(x);
    }
    if(root -> key > x)
    {
        root -> left = insert(root -> left,x);
    }
    else if(root -> key < x)
    {
        root -> right = insert(root -> right,x);
    }
    return root;
}
void inordertraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    inordertraversal(root -> left);
    cout << root -> key << " ";
    inordertraversal(root -> right);
}

int main()
{
    Node *root = new Node(20);
    root -> left = new Node(10);
    root -> left -> right = new Node(12);
    root -> right = new Node(22);
    root= insert(root,23);
    inordertraversal(root);
}