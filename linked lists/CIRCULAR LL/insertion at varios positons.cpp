#include<iostream>
using namespace std;
class node{
    public:
    node*next;
    int data;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insert_at_head(node*&head,int val)
{
    node*temp=head;
    node*newnode=new node(val);
    if(head==NULL)
    {
        newnode->next=newnode;
        head=newnode;
        return;
    }
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    head=newnode;
    



}
void insert_at_tail(node*&head,int val)
{
    node*temp=head;
    node*newnode=new node(val);
    if(head==NULL)
    {
    insert_at_head(head,val);
    return;}
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    
}
void display(node*head)
{
    int c=0;
    node*temp=head;
    if(head==NULL){
    cout<<"empty list\n";
    return;
    }
   do{
       cout<<temp->data<<" ";
       temp=temp->next;
       c++;
   }while(temp!=head);
   cout<<"\nnumber of nodes : "<<c;
}
int main()
{
    node*head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_tail(head,6);
    display(head);
    insert_at_head(head,10);
    cout<<endl;
    display(head);
}
