#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class BST{
    public:
    BST*lc,*rc;
    int data;
    BST(int data){
        this->data=data;
        lc=rc=NULL;
    }
};


BST* insert(BST*root,int key)
{
    BST*newnode=new BST(key);
    if(root==NULL){
    root=newnode;
    return root;}
    BST*temp=root;
    BST*temp2;
    while(temp!=NULL)
    {
        temp2=temp;
        if(key>temp->data)
        {
        temp=temp->rc;
        }
        else if(key<temp->data) {
            
            temp=temp->lc; 
        }
    }
    if(key<temp2->data)
    temp2->lc=newnode;
    else temp2->rc=newnode;
    return root;

}
void inorder(BST*root)
{
    stack<BST*>st;
    BST*temp=root;
    while(temp!=NULL || !st.empty())
    {
        if(temp!=NULL)
        {
            st.push(temp);
            temp=temp->lc;
        }
        else{
        temp=st.top();
        st.pop();
        cout<<temp->data<<" ";
        temp=temp->rc;
        }
    } 
}
// recursive function tto insert into BST
BST* Rinsert(BST*root,int key)
{
    BST*newnode=new BST(key);
    if(root==NULL)
    {
       root=newnode;
        return root;
    }
    if(root->data<key)
    {
        root->rc=Rinsert(root->rc,key);
    } 
    else if(root->data>key)
    { 
        root->lc=Rinsert(root->lc,key);
    }
    return root;

}

BST* search(BST *root,int key)
{
    if(root==NULL)
    return NULL;
    if(key<root->data)
    search(root->lc,key);
    else if(key>root->data)
    search(root->rc,key);
    else return root;
}
BST* delete_node(BST*root,int key)
{
   
    if(root==NULL)
    {
        return NULL;
    }
    if(key>root->data)
    {
        root->rc=delete_node(root->rc,key);
    }
    else if(key<root->data)
    {
        root->lc=delete_node(root->lc,key);
    }
    else {
         if(root->lc==NULL && root->rc==NULL)
            {
                delete root;
                return NULL;
            }
        else if(root->lc==NULL ^ root->rc==NULL)
       {
        if(root->lc!=NULL)
        {
           BST*temp=root->lc;
           root->lc=NULL;
           delete root;
           return temp;
        }
        else {
             BST*temp=root->rc;
           root->rc=NULL;
           delete root;
           return temp;
           }

        }
        else 
        {
            BST*temp=root->rc;
            while(temp->lc!=NULL)
            {
                temp=temp->lc;
            }
            BST*inorder_successor=temp;
            int inorder_successor_data=temp->data;
            root->data=inorder_successor_data;
            root->rc=delete_node(root->rc,inorder_successor_data);

        }
          
}
}

int main()
{
    
    BST*root=NULL;
    root=insert(root,9);
    insert(root,10);
    insert(root,7);
    insert(root,2);
    Rinsert(root,6);
    Rinsert(root,8);

    cout<<"inorder traversal of binary search tree: ";
    inorder(root);

    cout<<"\nresult : "<<search(root,6);
    delete_node(root,7);
    
    cout<<"\ninorder traversal after deletion: ";
    inorder(root);
}
