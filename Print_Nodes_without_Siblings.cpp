// nodes without siblings
void nodes_without_siblings(node*root)
{
    if(root==NULL)
    return;
    nodes_without_siblings(root->lc);
    nodes_without_siblings(root->rc);
    if(root->lc==NULL ^ root->rc==NULL)
    {
        if(root->lc)
        cout<<root->lc->data<<" ";
        else cout<<root->rc->data<<" ";
    }
}
