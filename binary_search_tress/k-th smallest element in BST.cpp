//kth smallest element
void inorder(Node*root,vector<int>&v)
    {
    if(root==NULL)
    return ;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
    }
    
    int KthSmallestElement(Node *root, int K) {
        // add code here.
         vector<int>v;
        inorder(root,v);
        if(root==NULL || K>v.size() )
        return -1;
       
        return v[K-1];
    }
