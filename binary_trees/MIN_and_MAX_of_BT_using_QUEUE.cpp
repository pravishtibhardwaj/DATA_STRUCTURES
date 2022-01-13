
//find minimum and maximum of given binary tree 
#include<queue>
void min_max(node*root)
{
	int min,max;
	if(root==NULL)
	return;
	min=max=root->data;
	queue<node*>q;
	q.push(root);
	while(!q.empty())
	{
		node*temp=q.front();
		q.pop();
		if(temp->lc)
		{
			q.push(temp->lc);
		}
		if(temp->rc)
		{
			q.push(temp->rc);
		}
		cout<<"\ntemp->data="<<temp->data<<endl;
		if(temp->data<min)
		min=temp->data;
		else if(temp->data>max)
		max=temp->data;
		cout<<"min="<<min;
		cout<<"\nmax="<<max<<endl;
	}
    cout<<"maximum value="<<max;
	cout<<"\nminimum value="<<min;	
}
