/*
Input:
      10
     /  \
    5    50
   /    /  \
  1    40  100
l = 5, h = 45
Output: 3
Explanation: 5 10 40 are the node in the
range
*/

void myfunc(Node*root,int l,int h,int &c)
{
    if(root==NULL)
    return ;
    if(root->data >=l && root->data <= h)
    c++;
    if(l>root->data)
    myfunc(root->right,l,h,c);
    else if(h<root->data)
    myfunc(root->left, l, h,c);
    else {
        myfunc(root->left,l,h,c);
        myfunc(root->right,l,h,c);
    }
  
}
int getCount(Node *root, int l, int h)
{
    int c=0;
    if(root==NULL)
    return c;
    myfunc(root,l,h,c);
    return c;
    
  // your code goes here   
}
