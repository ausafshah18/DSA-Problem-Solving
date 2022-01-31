/* deletion operation in BST  */
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
Node *getsuccessor(Node *curr) // its ouchoice to get successor or predecessor if right and left both are null to the node to be deleted. We just need to replace it with closest item in the tree.
{                                  // successor is always found my first going right then left left....
    curr = curr -> right;
    while(curr != NULL && curr ->left != NULL)
    {
        curr = curr -> left;
    }
    return curr;
}

Node *del(Node *root,int x)
{
    if(root == NULL)
    {
        return root;
    }if(root -> key < x)
    {
        root -> right = del(root -> right,x);
    }
    else if(root -> key > x)
    {
        root -> left = del(root -> left,x);
    }
    else
    {
        if(root -> left == NULL)
        {
            Node *temp = root -> right;
            delete root;
            return temp;
        }
        else if(root -> right == NULL)
        {
            Node *temp = root -> left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = getsuccessor(root);
            root -> key = succ -> key;
            root -> right = del(root -> right,succ -> key);
        }
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
    cout << (root -> key) << " ";
    inordertraversal(root -> right);
}

int main()
{
    Node *root = new Node(20);
    root -> left = new Node(10);
    root -> left -> right = new Node(12);
    root -> right = new Node(22);
    root= del(root,23);
    inordertraversal(root);
}