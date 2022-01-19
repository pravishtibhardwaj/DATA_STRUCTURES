/*There is BST given with root node with key part as integer only.
You need to find the inorder successor and predecessor of a given key.
In case, if the either of predecessor or successor is not found print -1.*/
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(root==NULL)
    return ;
   
       if(key==root->key){
          
            if(root->left){
                 Node*temp1=root->left;
            while(temp1->right!=NULL)
            temp1=temp1->right;
            pre=temp1;
            }
            if(root->right){
                
             Node*temp2=root->right;
            while(temp2->left!=NULL)
            temp2=temp2->left;
            suc=temp2;
            }
       }
       else  if(key > root->key){
           pre=root;
           findPreSuc(root->right,pre,suc,key);
       }
          else {
              suc=root;
              findPreSuc(root->left,pre,suc,key);
    }
    }
