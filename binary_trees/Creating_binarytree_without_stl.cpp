#include<iostream>
#include"queue.h"        //user defined header file is created in which queue is implemented with required operations
using namespace std;
class tree{
    public:
    node*root;
    
};
node * create_btree(){
    node*p,*t;
    queue q(100);
    int rootData,leftData,rightData;
    cout<<"enter rootdata:";
    cin>>rootData;
    node*root=new node(rootData);
    q.enq(root);
    while(!q.isempty())
    {
        p=q.deq(); 
        cout<<"enter leftchild data of "<<p->data<<"\n";
        cin>>leftData;
        if(leftData!=-1){
        t=new node(leftData);
        t->lc=t->rc=NULL;
        p->lc=t;
        q.enq(t);
    
        }
        cout<<"Enter right child data of "<<p->data<<"\n";
        cin>>rightData;
        if(rightData!=-1)
        {
            t=new node(rightData);
            t->lc=t->rc=NULL;
            p->rc=t;
            q.enq(t);
            
            
        }
    }
    return root;
}
void levelorder(node*root)
{
    queue q(100);
    int h1=0,h2=0;
    q.enq(root);
    cout<<root->data<<" ";
    while(!q.isempty())
    {
        node*temp=q.deq();
        if(temp->lc)
        {
            cout<<temp->lc->data<<" ";
            q.enq(temp->lc);
         
            
        }
        if(temp->rc)
        {
            cout<<temp->rc->data<<" ";
            q.enq(temp->rc);
    
        }
    }
    
}
void preorder(node*root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->lc);
        preorder(root->rc);
    }
}
void postorder(node*root)
{
    if(root)
    {
        postorder(root->lc);
        postorder(root->rc);
        cout<<root->data<<" ";
    }
}
void inorder(node*root)
{
    if(root)
    {
        inorder(root->lc);
        cout<<root->data<<" ";
        inorder(root->rc);
    }
}
int count_nodes(node*root)
{
    int n1=0,n2=0;
    if(root==NULL)
    return 0;
    n1=n1+count_nodes(root->lc);
    n2=n2 +count_nodes(root->rc);
    return n1+n2+1;
}
int main()
{
    int h;
    node * root = create_btree();
    cout<<"level order: ";
    h=levelorder(root);
    cout<<endl<<"preorder:" ;
    preorder(root);
    cout<<endl<<"postorder:" ;
    postorder(root);
    cout<<endl<<"inorder:" ;  
    inorder(root);
    int nodes=count_nodes(root);
//     int height=(nodes-1)/2;
    cout<<"no of nodes="<<nodes<<endl;
    // cout<<"height="<<height;
    cout<<h;
}
