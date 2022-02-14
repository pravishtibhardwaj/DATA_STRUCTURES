// implementation of AVL trees also known as height balanced binary search tress

#include<iostream>
using namespace std;
class node{
    public:
    node*left,*right;
    int data;
    int height;
    node(int data)
    {
        this->data=data;
        left=right=NULL;
        height=1;
    }
};
int node_height(node*root)
{
    
    int h1=root && root->left ? root->left->height:0;
    int h2=root && root->right ? root->right->height:0;
    return (h1>h2)?h1+1 : h2+1;

}
int balance_factor(node*root)
{

       int h1=root&&root->left?root->left->height:0;
       int h2=root&&root->right?root->right->height:0;
       return h1-h2;
}
node*LLrotation(node*root)
{
    node*pl,*plr;
    pl=root->left;
    plr=pl->right;
    
    pl->right=root;
    root->left=plr;
    
    pl->height=node_height(pl);
    root->height= node_height(root);
    return pl;
}
node*LRrotation(node*root)
{
    node*pl,*plr;
    pl=root->left;
    plr=pl->right;
    
    pl->right=plr->left;
    root->left=plr->right;
    
    plr->left=pl;
    plr->right=root;

    //updating all heights
    root->height=node_height(root);
    pl->height=node_height(pl);
    plr->height=node_height(plr);

    return plr;

}

node*RRrotation(node*root)
{
    node*pl=root->right;
    node*plr=pl->left;
    
    pl->left=root;
    root->right=plr;
    
    root->height=node_height(root);
    pl->height=node_height(pl);
    return pl;
}
node*RLrotation(node*root)
{
    node*pl=root->right;
    node*plr=pl->left;

    root->right=plr->left;
    pl->left=plr->right;

    plr->left=root;
    plr->right=pl;
    
    plr->height=node_height(plr);
    pl->height=node_height(pl);
    root->height=node_height(root);
    return plr;
}
node* insert(node*root,int val)
{
    node*newnode=new node(val);
    if(root==NULL)
    {
    	
        root=newnode;
        return root;
    }
    if(val>root->data)
    {
        root->right=insert(root->right,val);
    }
    else if(val<root->data)
    root->left=insert(root->left,val);
    
    else return root;
    
    root->height=node_height(root);
    
    if(balance_factor(root)==2 && balance_factor(root->left)==1)
    {
        return  LLrotation(root);
    }
    else if(balance_factor(root)==2 && balance_factor(root->left)==-1)
    {
        return  LRrotation(root);
    }
    else if(balance_factor(root)==-2 && balance_factor(root->right)==-1)
    {
        return  RRrotation(root);
    }
    else if(balance_factor(root)==-2 && balance_factor(root->right)==1)
    {
        return  RLrotation(root);
    }
    return root;
}
void preorder(node*root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    
}
node*deleteNode( node* root,int data)
{
	if(root==NULL)
	return NULL;
	if(data > root->data)
	{
		root->right=deleteNode(root->right,data);
	}
	else if(data < root->data)
	{
		root->left=deleteNode(root->left,data);
	}
	else 
	{
		if(root->left==NULL && root->right==NULL)
		{
			delete root;
			return NULL;
		}
		else if(root->left==NULL ^ root->right==NULL)
		{
			if(root->left==NULL)
			{
				node*temp=root->right;
			    root->right=NULL; 
			    delete root;
			    return temp;
			}
			else {
				node*temp=root->left;
				root->left=NULL;
				delete root;
				return temp;
			}
			
		}
		else{
			node*temp=root->right;
			while(temp->left!=NULL)
			{
				 temp=temp->left;
			}
			int inorder_data=temp->data;
			root->data=inorder_data;
			root->right=deleteNode(root->right,inorder_data);
			 
		}
		
	}
	root->height=node_height(root);
	if(balance_factor(root)==2 && balance_factor(root->left)==1)
    {
        return  LLrotation(root);
    }
    else if(balance_factor(root)==2 && balance_factor(root->left)==-1)
    {
        return  LRrotation(root);
    }
    else if(balance_factor(root)==-2 && balance_factor(root->right)==-1)
    {
        return  RRrotation(root);
    }
    else if(balance_factor(root)==-2 && balance_factor(root->right)==1)
    {
        return  RLrotation(root);
    }
    return root;
	
}
int main()
{
    node*root=NULL;
    root=insert(root,20);
    root=insert(root,40);
    root=insert(root,75);
    root=insert(root,28);
    root=insert(root,19);
    root=insert(root,60);
    root=insert(root,57);
    preorder(root);
    root=deleteNode(root,28);
    cout<<"\nafter deleting :\n";
    preorder(root);
}
