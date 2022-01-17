/*Given the root of a Binary Search Tree (BST), 
convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.*/
 void gst(TreeNode*root,int &sum)
    {
        if(root==NULL)
            return ;
        gst(root->right,sum);
            root->val=root->val+sum;
            sum=root->val;
        gst(root->left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL)
            return NULL;
        int s=0;
        gst(root,s);
        return root;
    }
