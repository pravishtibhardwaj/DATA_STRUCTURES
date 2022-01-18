class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node*root,vector<int>&v)
    {
        
        
        if(root==NULL)
        return ;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
        
        
    }
    Node*convert(int low,int high,vector<int>v)
    {
        if(low>high)
        return NULL;
        int mid=(low+high)/2;
        Node*root=new Node(v[mid]);
        root->left=convert(low,mid-1,v);
        root->right=convert(mid+1,high,v);
        return root;
    }
    Node *binaryTreeToBST (Node *root)
    {
        
        vector<int>vec;
        inorder(root,vec);
        if(vec.empty())
        return NULL;
        
        sort(vec.begin(),vec.end());
      
        return convert(0,vec.size()-1,vec);
        
        
        //Your code goes here
    }
};
