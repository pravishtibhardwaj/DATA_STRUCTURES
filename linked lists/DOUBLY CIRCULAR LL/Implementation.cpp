#include<iostream>
using namespace std;
class node
{
	public:
		node*next,*prev;
		int data;
		node(int data)
		{
			this->data=data;
			next=prev=NULL;
		}
};
void insert_at_beg(node*&head,int data)
{
	node*newnode=new node(data);
	if(head==NULL)
	{
		head=newnode;
		head->next=head;
		head->prev=head;
		return ;
	
	}
	newnode->next=head;
	head->prev->next=newnode;
	newnode->prev=head->prev;
	head->prev=newnode;
	head=newnode;
	
}
void display(node*head)
{
	node*temp=head;
	if(head==NULL){
	cout<<"empty ";
	return;
}
do{
	cout<<temp->data<<" ";
	temp=temp->next;
	
}while(temp!=head);
	
}
void insert_at_end(node*&head,int data)
{
	node*newnode=new node(data);
	if(head==NULL)
	{
		head=newnode;
		head->next=head;
		head->prev=head;
		return ;
		
	}
	node*temp=head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	newnode->next=head;
	newnode->prev=temp;
	head->prev=newnode;
	temp->next=newnode;
}
void insert_at_pos(node*&head,int pos,int val)
{
    node*temp=head;
    node*newnode=new node(val);
    if(pos==1){
        insert_at_beg(head,val);
        return;
    }
    int i=1;
    while(i<pos-1 && temp->next!=NULL){
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=newnode;
    temp->next=newnode;
   
}
void del_from_beg(node*&head)
{
	if(head==NULL)
	{
		cout<<"empty\n";
		return;
	}
	node*temp=head;
	if(head->next==head && head->prev==head)
	{
		head=NULL;
		delete temp;
		return;
	}
	
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	node*todel=head;
	head=head->next;
	temp->next=head;
	head->prev=temp;
	delete todel;
	
	
}
void del_posn(node*&head,int pos)
{
    int i=1;
    node*temp=head;
    if(head==NULL)
    {
        cout<<"empty list\n";
        return;
    }
    if(pos==1)
    {
        del_from_beg(head);
        return;
    }
    
    while(i<pos && temp!=NULL)
    {
        temp=temp->next;
        i++;
       
    }
     temp->prev->next=temp->next;
     temp->next->prev=temp->prev;

     delete temp;
}
void del_from_end(node*&head)
{
	
	if(head==NULL){
		cout<<"empty\n";
		return;
	}
	node*temp =head;
	if(head->next==head)
	{
		head=NULL;
		delete temp;
		return;
	}
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->prev->next=head;
	head->prev=temp->prev;
	delete temp;
}
int main()
{
	node*head=NULL;
	int pos,val;
	insert_at_beg(head,1);
	insert_at_beg(head,2);
	insert_at_beg(head,3);
	insert_at_beg(head,4);
	insert_at_beg(head,5);
	display(head);
	
	insert_at_end(head,6);
	insert_at_end(head,7);
	insert_at_end(head,8);
	cout<<endl;
	display(head);
	
	cout<<"enter pos and value : ";
	cin>>pos>>val;
	insert_at_pos(head,pos,val);
	cout<<endl;
	cout<<"after inserting at given pos : ";
	display(head);
  
	cout<<"\nafter deleting from start :";
	del_from_beg(head);
	display(head);
  
	cout<<"\nafter deleting from end:";
	del_from_end(head);
	display(head);
  
	cout<<"\nenter the pos from where the element to be deleted:";
	cin>>pos;
	cout<<"\nafter deleting from the given pos:";
	del_posn(head,pos);
	display(head);
//	cout<<"\n"<<head->prev->data;  
	
}
