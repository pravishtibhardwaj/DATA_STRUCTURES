#include<iostream>
// #include<queue>
// using namespace std;
// class node{
//     public:
//     int data;
   
//     node *lc,*rc;
//     node(int data)
//     {
//         this->data=data;
//         lc=NULL;
//         rc=NULL;
//     }
// };
// node* create_btree()
// {
//     queue<node*>q;
//     node*temp1,*temp2;
//     int rootData,leftData,rightData;
//     cout<<"enter rootdata:";
//     cin>>rootData;
//     node*root=new node(rootData);
//     q.push(root);
//     while(!q.empty())
//     {
//         node*temp=q.front();
//         q.pop();
//     cout<<"enter left child :";
//     cin>>leftData;
//     if(leftData!=-1)
//     {   node*leftchild=new node(leftData);
//         q.push(leftchild);
//         temp1->lc=leftchild;
//     }
//     cout<<"enter right child:";
//     cin>>rightData;
//     if(rightData!=-1)
//     {
//         node*rightchild=new node(rightData);
//         q.push(rightchild);
//         temp->rc=rightchild;
        
//     }
//     }
//     return root;
// }
// void preorder(node*root)
// {
//     if(root)
//     {
//         cout<<root->data;
//         preorder(root->lc);
//         preorder(root->rc);
//     }
// }
// int main()
// {
//     node*root=create_btree();
//     preorder(root);
// }