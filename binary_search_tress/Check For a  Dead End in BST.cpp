/* Input :   
               8
             /   \ 
           5      9
         /  \     
        2    7 
       /
      1     
          
Output : Yes
Explanation : Node "1" is the dead End because after that 
              we cant insert any element. */
bool myfunc(Node* root,int l,int h){
   
   if(root==NULL) 
   return false;
   
   if(l==h) 
   return true;
   
   return myfunc(root->left,l,root->data-1) || myfunc(root->right,root->data+1,h);
   
}
bool isDeadEnd(Node *root)
{
   int l = 1;
   int h= INT_MAX;
   return myfunc(root,l,h);
   
}
