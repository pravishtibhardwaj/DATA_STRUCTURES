/* Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
A binary tree is symmetric if the root node's left subtree is a mirror reflection of the right subtree. */
 bool helper(TreeNode*l,TreeNode*r)
 {
    if(l==NULL && r==NULL)
    return true;
    if(l==NULL ^ r==NULL)
    return false;
    return l->val==r->val &&helper(l->left,r->right) && helper(l->right,r->left);
 }
 bool isSymmetric(TreeNode* root)
 {
    if(root==NULL)
    return true;
    return helper(root->left,root->right);
 }
