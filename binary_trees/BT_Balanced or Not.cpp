/*Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:
a binary tree in which the left and right subtrees of every node differ in height by no more than 1.*/
class Solution {
public:
    int height(TreeNode*root,int &flag)
    {
        if(root==NULL)
            return 0;
        int h1=height(root->left,flag);
        int h2=height(root->right,flag);
        if(abs(h1-h2)>1)
            flag=0;
        return max(h1,h2)+1;
        
    }
    bool isBalanced(TreeNode* root) {
         int flag=1;
        height(root,flag);
        if(flag==0)
            return false;
        else return true;
    }
};
