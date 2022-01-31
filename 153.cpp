/* Level Order traversal of Binary Tree Line by Line */
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
    q.push(NULL);
    while(q.size() > 1)
    {
        node *curr = q.front();
        q.pop();
        if(curr == NULL)
        {
            cout << endl; //  or we can use cout << "/n";
            q.push(NULL);
            continue;
        }
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
    root -> left = new node(20);
    root -> right = new node(30);
    root -> left -> left = new node(40);
    breadthfirstTraversal(root);
}