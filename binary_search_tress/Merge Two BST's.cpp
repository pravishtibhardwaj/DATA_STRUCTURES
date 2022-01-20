/*
Input:
BST1:
       5
     /   \
    3     6
   / \
  2   4  
BST2:
        2
      /   \
     1     3
            \
             7
            /
           6
Output: 1 2 2 3 3 4 5 6 6 7   */

void inorder(Node*root,vector<int>&v)
    {
        if(root==NULL)
        return ;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
        
    }
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int>vec;
        if(root1==NULL && root2==NULL)
        return vec;
        vector<int>v1;
        inorder(root1,v1);
        vector<int>v2;
        inorder(root2,v2);
        v1.insert(v1.end(),v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        
        return v1;
       //Your code here
    }
