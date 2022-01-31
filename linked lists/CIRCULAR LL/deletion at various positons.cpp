#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
};
void insertH(node*&head,int val)
{
    node*newnode=new node(val);
    node*temp=head;
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
void insertT(node*&head,int val)
{
    node*newnode=new node(val);
    node*temp=head;    
    if(head==NULL)
    {
        insertH(head,val);
        return;
    }
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
void display(node*head)
{
    node*temp=head;
    if(head==NULL)
    {
        cout<<"empty list\n";
        return;
    }
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}
void delete_at_head(node*&head)
{
    node*temp=head;
    if(head==NULL)
    {
        cout<<"empty list\n";
        return;
    }
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    head=head->next;
    free(temp->next);
    temp->next=head;

}
void delete_at_last(node*&head)
{
    node*temp=head;
    if(head==NULL)
    {
        cout<<"empty list\n";
        return;
    }
    while(temp->next->next!=head)
    {
        temp=temp->next;
    }

    free(temp->next);
    temp->next=head;

}
void del_at_pos(node*&head,int pos)
{
    if(pos==1)
    {
        delete_at_head(head);
        return;
    }
    int i=1;
    node*temp=head;
    node*p=temp;
    while(i<pos && temp->next!=head)
    {
        p=temp;
        temp=temp->next;
    
        i++;
    }
    p->next=temp->next;
    free(temp);


}
int main() 
{
    node*head=NULL;
    insertT(head,1);
    insertT(head,2);
    insertT(head,3);
    insertT(head,4);
    insertT(head,5);
    insertT(head,6);
    display(head);
    // delete_at_head(head);
    // cout<<"\nafter deleting from front"<<endl;
    // display(head);  
    // delete_at_last(head);
    // cout<<"\nafter deleting from the last"<<endl;
    // display(head);
    del_at_pos(head,1);
    cout<<"\nafter deleting at gicven position:"<<endl;
    display(head);


}  
