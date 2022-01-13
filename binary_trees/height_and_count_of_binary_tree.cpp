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
node*create_bt(){
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
void inorder(node*root)
{
    if(root)
    {
        inorder(root->lc);
        cout<<root->data<<" ";
        inorder(root->rc);
    }
}
//function to count total number of nodes nodes
int count_nodes(node*root)
{
    int n1=0,n2=0;
    if(root==NULL)
    return 0;
    n1=n1+count_nodes(root->lc);
    n2=n2 +count_nodes(root->rc);
    return n1+n2+1;
} 
//function to count leaf nodes
int count_leaf_nodes(node*root)
{
    int x=0,y=0;
    if(root==NULL)
    return 0;
    x=count_leaf_nodes(root->lc);
    y=count_leaf_nodes(root->rc);
    if(root->lc==NULL && root->rc==NULL)
    return x+y+1;
    return x+y;
}
int height(node*root)
{
    int n1=0,n2=0;
    if(root==NULL)
    return 0;
    n1=height(root->lc);
    n2=height(root->rc);
    return((n1>n2)?n1+1:n2+1);
} 
int main()
{
    node*root=create_bt();
    inorder(root);
    int totalnodes=count_nodes(root);
    int leaf_nodes=count_leaf_nodes(root);
    int h=height(root);
    cout<<"\ntotal nodes="<<totalnodes<<endl;
    cout<<"leaf nodes="<<leaf_nodes<<endl;;
    cout<<"height of binary tree:"<<h;
}

//for counting nodes with exactly one child -------> if(root->lc==NULL ^ root->rc==NULL)
