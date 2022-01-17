/*Given the root of a binary tree, return the sum of all left leaves.*/
void myfunc(TreeNode*root,int &sum)
    {
        if(root==NULL || (root->left==NULL && root->right==NULL))
            return;
        myfunc(root->left,sum);
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
            sum=sum+root->left->val;
        myfunc(root->right,sum);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum=0;
        myfunc(root,sum);
        return sum;
    }
