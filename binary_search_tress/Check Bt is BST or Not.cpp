 
bool check(TreeNode*root,long long int max,long long int min)
    {
        if(root==NULL)
            return true;
        if(!(root->val > min && root->val <max))
            return false;
        else return check(root->left,root->val,min)&& check(root->right,max,root->val);
    }
    bool isValidBST(TreeNode* root) {
        long long int min=LONG_MIN;
        long long int max=LONG_MAX;
        return check(root,max,min);
    }
