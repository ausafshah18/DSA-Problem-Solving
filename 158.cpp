/* Children sum property */
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
bool childrenSum(Node *root)
{
   if(root == NULL)
   {
       return true;
   }
   if(root -> left == NULL && root -> right == NULL)
   {
       return true;
   }
   int sum = 0;
   if(root -> right != NULL)
   {
       sum += root -> right -> key;
   }
   if(root -> left  != NULL)
   {
       sum += root -> left -> key;
   }
   return(root -> key == sum && childrenSum(root -> left) && childrenSum(root -> right)); // last and second last conditions mean if they are true
}

int main()
{
    Node *root = new Node(20);
    root -> left = new Node(8);
    root -> right = new Node(12);
    root -> left-> right = new Node(5);
    root -> left -> left = new Node(3);
    cout << childrenSum(root);
}