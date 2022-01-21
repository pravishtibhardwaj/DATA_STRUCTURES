/*  Input:

          10
        /    \
      20      30
    /   \ 
   10    10

Output: 0
Explanation:
The given tree is not a sum tree.
For the root node, sum of elements
in left subtree is 40 and sum of elements
in right subtree is 30. Root element = 10
which is not equal to 30+40.
*/

int check(Node*root,int &flag)
    {
        if(root==NULL)
        return 0;
        int x1=check(root->left,flag);
        int x2=check(root->right,flag);
        if(root->data!=x1+x2 && (root->left!=NULL ||root->right!=NULL))
        flag=0;
        return x1+x2+root->data;
        
        
    }
    bool isSumTree(Node* root)
    {
        if(root==NULL)
        return true;
        int flag=1;
        check(root,flag);
        if(flag==0)
        return false;
        else return true;
        
       
        
         // Your code here
    }
