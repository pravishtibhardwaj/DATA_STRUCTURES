/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* convert(int beg,int end,vector<int>&nums)
    {
        if(beg>end)
            return NULL;
        int mid=(beg+end)/2;
        TreeNode*root=new TreeNode(nums[mid]);
        root->left=convert(beg,mid-1,nums);
        root->right=convert(mid+1,end,nums);
        return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())
            return NULL;
        return convert(0,nums.size()-1,nums);
    }
};
