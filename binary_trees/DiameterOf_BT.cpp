// method 1 
int height(node*root,int &result)
  {
      if(root==NULL)
      return 0;
      int h1=height(node->left);
      int h2=height(node->right);
      int h=max(h1,h2)+1;
      int r1=max(h,h1+h2+1);
      int result=max(r1,r2);
      return h;
  }
 int diameter(Node* root) {
        int res=-1;
        height(root,res);
        return res;
    }


// Method 2 using pair class

pair<int,int> myfunc(Node*root) {
         
         if(root==NULL){
             pair<int,int>p;
         p.first=0;
         p.second=0;
         return p;
         }
         pair<int,int>leftans=myfunc(root->left);
         pair<int,int>rightans=myfunc(root->right);
         int lh=leftans.first;
         int ld=leftans.second;
         int rh=rightans.first;
         int rd=rightans.second;
         int height=max(lh,rh)+1;
         int diameter=max(lh+rh+1,max(ld,rd));
         pair<int,int>p;
         p.first=height;
         p.second=diameter;
         return p;
     }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {

      pair<int,int>ans=myfunc(root);
        return ans.second;
        
    }
