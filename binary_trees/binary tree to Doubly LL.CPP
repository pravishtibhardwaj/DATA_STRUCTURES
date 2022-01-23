/*
Input:
       10
      /   \
     20   30
   /   \
  40   60
Output:
40 20 60 10 30 
30 10 60 20 40
Explanation:  DLL would be 
40<=>20<=>60<=>10<=>30.  */

 void myfunc(Node*root,Node*&head,Node*&prev)
    {
        if(root==NULL)
        return ;
       
        myfunc(root->left,head,prev);
        if(prev==NULL)
        {
            head=root;
        }
        else{
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        myfunc(root->right,head,prev);
    }
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        if(root==NULL)
        return NULL;
        Node*head=NULL,*prev=NULL;
        myfunc(root,head,prev);
        return head;
    
        // your code here
    }
};
