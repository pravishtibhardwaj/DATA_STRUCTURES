 
// https://leetcode.com/problems/range-sum-of-bst/

void myfunc(TreeNode*root,int l,int h,int &sum)
{
    if(root==NULL)
    return ;
    if(root->val >=l && root->val <= h)
    sum=sum+root->val;
    if(l>root->val)
    myfunc(root->right,l,h,sum);
    else if(h<root->val)
    myfunc(root->left, l, h,sum);
    else {
        myfunc(root->left,l,h,sum);
        myfunc(root->right,l,h,sum);
    }
  
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
            return 0;
        int sum=0;
        myfunc(root,low,high,sum);
        return sum;
    }
