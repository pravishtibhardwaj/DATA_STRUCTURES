// print the mirror image of given binary tree of type integer

/* this function swaps the left and child of the root and return the root*/
node*swap(node*root)    
{
    if(root->lc==NULL && root->rc==NULL)
    return root;
    node*temp;
    temp=root->lc;
    root->lc=root->rc;
    root->rc=temp;
    return root;
}

/*recursive function which uses swap function to find mirror image and returns the root of mirrored BT*/
node*mirror(node*root)
{
    if(root==NULL)
    return root;
    root->lc=mirror(root->lc);
    root->rc=mirror(root->rc);
    swap(root);
    return root;

}
