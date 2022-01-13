#include<iostream>
using namespace std;
class node{
    public:
    node*lc,*rc;
    int data;
    node(int data)
    {
        lc=rc=NULL;
        this->data=data;
    }
};
int search(int *inorder,int st,int end,int key)
{
    for(int i=st;i<=end;i++)
    {
        if(inorder[i]==key)
        return i;
    }
    return -1;
}
node* buildtree(int start,int end ,int *pre,int*inorder)
{
    if(start>end)
     return NULL;
     static int i=0;
     int cur=pre[i];
     i++;
     node*root=new node(cur);
     if(start==end)
     return root;
     int m=search(inorder,start,end,cur);
     root->lc=buildtree(start,m-1,pre,inorder);
     root->rc=buildtree(m+1,end,pre,inorder);
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
int main()
{
    int n;
    cout<<"enter number of nodes : ";
    cin>>n;
    int*arr1=new int(n);
    int *arr2=new int(n);
    cout<<"enter preorder sequence:";
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    cout<<"inorder sequence :";
    for(int i=0;i<n;i++)
    cin>>arr2[i];
    node*root=buildtree(0,n-1,arr1,arr2);
    cout<<"inorder of tree:";
    inorder(root);
    cout<<endl<<"postorder of tree:"; 
    postorder(root);
}
