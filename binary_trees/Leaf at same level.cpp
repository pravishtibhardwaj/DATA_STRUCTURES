/* Input:
            10
          /    \
        20      30
       /  \        
     10    15

Output: 0

Explanation:
Leaves 10, 15 and 30 are not at same level.   */

int check(Node*root,int &f)
  {
      if(root==NULL)
      return 0;
      int h1=check(root->left,f);
      int h2=check(root->right,f);
      if(h1!=h2 && root->left!=NULL && root->right!=NULL)
      f=0;
      return 1+max(h1,h2);
  }
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        int flag=1;
        if(root==NULL)
        return true;
        check(root,flag);
        if(flag==1)
        return true;
        else return false;
        //Your code here
    }
