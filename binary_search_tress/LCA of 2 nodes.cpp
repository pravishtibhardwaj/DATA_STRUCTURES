/*Given a Binary Search Tree (with all values unique) and two node values. Find the Lowest Common Ancestors of the two nodes in the BST.

Input:
              5
           /    \
         4       6
        /         \
       3           7
                    \
                     8
n1 = 7, n2 = 8
Output: 7
*/

Node* LCA(Node *root, int n1, int n2)
{
    if(root==NULL)
    return NULL;
    if(n1>root->data && n2> root->data)                                                  
    LCA(root->right,n1,n2);
    else if(n1<root->data && n2<root->data)
    LCA(root->left ,n1,n2);
    else
    return root;
   //Your code here
}
