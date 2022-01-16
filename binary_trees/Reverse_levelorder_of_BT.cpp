/*Given the root of a binary tree, return the bottom-up level order traversal of its nodes' values. 
(i.e., from left to right, level by level from leaf to root).*/
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>v1;
        vector<vector<int>>v2;
        if(root==NULL)
            return v2;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v1;
            for(int i=0;i<n;i++){
               TreeNode*temp=q.front();
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
            v1.push_back(temp->val);
                q.pop();
            }
            v2.push_back(v1);   
        }
        reverse(v2.begin(),v2.end());
        return v2;
    }
        
};
