/* Level Order traversal of Binary Tree */
#include <bits/stdc++.h> 
using namespace std; 
int n = 0,k = 0;
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

void breadthfirstTraversal(node *root)
{
    queue <node*>q;
    q.push(root);
    while(q.empty() == false)
    {
        node *curr = q.front();
        q.pop();
        cout << curr -> key << " ";
        if(curr -> left != NULL)
        {
            q.push(curr -> left);
        } 
        if(curr -> right != NULL)
        {
            q.push(curr -> right);
        }
    }
}

int main()
{
    node *root = new node(10);
    root -> left = new node(15);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> right -> left = new node(40);
    root -> right -> right = new node(50);
    root -> right -> left -> left = new node(60);
    root -> right -> left -> right = new node(70);
    breadthfirstTraversal(root);
}