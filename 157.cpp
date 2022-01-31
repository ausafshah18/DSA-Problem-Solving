/* Left view  of Binary Tree */
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
int maxlevel = 0;
void printleft(Node *root,int level)
{
    if(root == NULL)
    {
        return;
    }
    if(maxlevel < level)
    {
        cout << (root -> key) << " ";
        maxlevel = level;
    }
    printleft(root -> left,level+1);
    printleft(root -> right,level+1);
}

int main()
{
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> right -> right = new Node(50);
    root -> right -> left = new Node(40);
    printleft(root,1);
}