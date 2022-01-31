/* Recursive Search operation in BST */
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
bool search(Node *root,int num)
{
    if(root == NULL)
    {
        return false;
    }
    if(num == root -> key)
    {
        return true;
    }
    else if(num < root -> key)
    {
        return search(root -> left,num);
    }
    else
    {
        return search(root->right,num);
    }
}

int main()
{
    Node *root = new Node(20);
    root -> left = new Node(10);
    root -> left -> right = new Node(12);
    root -> right = new Node(22);
    cout << search(root,12);
}