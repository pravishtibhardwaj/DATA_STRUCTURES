
//find sum of all nodes present in the given binary tree

int sum_of_nodes(node*root)
{
    static int sum=0;
	if(root==NULL)
	return 0;
	
	sum=root->data+sum_of_nodes(root->lc)+sum_of_nodes(root->rc);
	return sum;
	
}
