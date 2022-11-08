
//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(Node* root)
{
    // If there is no nodce present
    if(root == NULL)
        return 0;
   
    // Since the leaf node wouldn't have any nodes present
    if(root->left == NULL && root->right == NULL)
        return 1;
    
    // Calculating for both right and left subtrees
    return countLeaves(root->left) + countLeaves(root->right);
}
