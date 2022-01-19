/*Given a Binary Tree, write a function to populate next pointer for all nodes. 
The next pointer for every node should be set to point to inorder successor.

Input:
           10
       /  \
      8    12
     /
    3
  

Output: 3->8 8->10 10->12 12->-1
*/

 void inorder_t(Node*root,vector<Node*>&v)
    {
        if(root==NULL)
        return;
        inorder_t(root->left,v);
        v.push_back(root);
        inorder_t(root->right,v);
        
    }
    void populateNext(Node *root)
    {
        if(root==NULL)
        return;
        vector<Node*>v;
        inorder_t(root,v);
        for(int i=0;i<v.size()-1;i++)
        v[i]->next=v[i+1];
        v[v.size()-1]->next=NULL;
        //code here
    }
