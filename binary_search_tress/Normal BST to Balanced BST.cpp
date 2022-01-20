/*
 modify the given BST such that it is balanced and has minimum possible height.

Examples :

Input:
       30
      /
     20
    /
   10
Output:
     20
   /   \
 10     30
 */

void inorder(Node*root,vector<int>&v)
{
    if(root==NULL)
    return ;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
Node* buildbst(int low,int high,vector<int>v)
{
    if(low>high)
    return NULL;
    int mid=(low+high)/2;
    Node*root=new Node(v[mid]);
    root->left=buildbst(low,mid-1,v);
    root->right=buildbst(mid+1,high,v);
    return root;
    
    
}

Node* buildBalancedTree(Node* root)
{
    if(root==NULL)
    return NULL;
    vector<int>v;
    inorder(root,v);
    Node*newroot=buildbst(0,v.size()-1,v);
    return newroot;
    
	// Code here
}
