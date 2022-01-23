/*  Given the root of a binary search tree (BST) with duplicates, return all the mode(s) (i.e., the most frequently occurred element) in it.

If the tree has more than one mode, return them in any order.*/

 void find(TreeNode*root,map<int,int>&m)
    {
        
        if(root==NULL)
            return;
        find(root->left,m);
        m[root->val]++;
        find(root->right,m);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>v;
        map<int,int>m;
        if(root==NULL)
            return v;
     
     find(root,m);
           int max=INT_MIN;
        for(auto it:m)
        {
            if(it.second >max)
                max=it.second;
        }
        for(auto it:m){
            if(it.second==max)
                v.push_back(it.first);
        }
        return v;
        
    }
