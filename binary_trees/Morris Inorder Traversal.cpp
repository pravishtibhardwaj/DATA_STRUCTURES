/* Using Morris Traversal, we can traverse the tree without using stack and recursion.
 The idea of Morris Traversal is based on Threaded Binary Tree. In this traversal,
  we first create links to Inorder successor and print the data using these links, 
  and finally revert the changes to restore original tree. */

#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    node*lc,*rc;
    int data;
    node(int data){
        this->data=data;
        lc=rc=NULL;
    }
};
class tree{
    public:
    node*root;

};

node*take_input_levelwise(){
    queue<node*>q;
    int x,y,r;
    cout<<"enter root data :";
    cin>>r;
    node*root=new node(r);
    q.push(root);
    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();
        cout<<"enter left cbild of "<<temp->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            node*ln=new node(x);
            temp->lc=ln;
            q.push(ln);

        }
        cout<<"enter right child of "<<temp->data<<endl;
        cin>>y;
        if(y!=-1)
        {
            node*rn=new node(y);
            temp->rc=rn;
            q.push(rn);
        }
    }

    return root;
}
void levelorder_display(node*root)
{
    queue<node*>q;
    q.push(root);
    cout<<root->data<<" ";
    while(!q.empty())
    {
        node*temp=q.front();
        q.pop(); 
        if(temp->lc)
        {
            cout<<temp->lc->data<<" ";
            q.push(temp->lc);
         
            
        }
        if(temp->rc)
        {
            cout<<temp->rc->data<<" ";
            q.push(temp->rc);
    
        }
    }
    
}
int morris_traversal(node*root)
{
    if(root== NULL)
    return 0;
    node*cur=root;
    node*pre=cur;
    int count=0;
    while(cur!=NULL)
    {
        if(cur->lc==NULL){
            cout<<cur->data<<" ";
            count++;
        cur=cur->rc;
        }
        else
        {
            pre=cur->lc;
            while(pre->rc!=NULL && pre->rc!=cur)
            pre=pre->rc;
            if(pre->rc==NULL){
            pre->rc=cur;
            cur=cur->lc;
            }
            else{
                count++;
                pre->rc=NULL;
                cout<<cur->data<<" ";
                cur=cur->rc;

            }
        }
    }
    return count;
}
int main()
{
    node*root=take_input_levelwise();
    cout<<"\nlevelorder of given tree : ";
    levelorder_display(root);
    cout<<endl;
    morris_traversal(root);
    
}
