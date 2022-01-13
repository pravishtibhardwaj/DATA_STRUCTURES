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

int main()
{
    node*root=take_input_levelwise();
    cout<<"levelorder of given tree : ";
    levelorder_display(root);
}
