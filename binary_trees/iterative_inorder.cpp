#include<iostream>
#include<stack>
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

void inorder(node*root){
   stack<node*>st;
   node*temp=root;
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
int main()
{
    node*root=take_input_levelwise();
   inorder(root);
    
}
