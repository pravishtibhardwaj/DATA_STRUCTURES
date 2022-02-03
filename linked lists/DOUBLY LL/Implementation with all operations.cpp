//DLL
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
 void insert_at_head(node*&head,int val)
{
    node*newnode=new node(val);
    newnode->next=head;
    newnode->prev=NULL;
    if(head!=NULL)
    head->prev=newnode;
    head=newnode;
}
void insert_at_end(node*head,int val)
{
    node*newnode=new node(val);
    if(head==NULL)
    {
        newnode->prev=NULL;
        head=newnode;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
    temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
void insert_at_pos(node*&head,int val,int pos)
{
    node*temp=head;
    node*newnode=new node(val);
    if(pos==1){
        insert_at_head(head,val);
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
void display(node*head)
{  
    if(head==NULL){
    cout<<"empty list\n";
    return;
    } 
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void delete_frontn(node*&head)
{
    node*temp=head;
    if(head==NULL)
    {
        cout<<"empty list\n";
        return;
    }
    head=head->next;
    head->prev=NULL;
    free(temp);
}
void del_lastn(node*head)
{
    node*temp=head;
    if(head==NULL){
        cout<<"empty\n";
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->prev->next=NULL;
    free(temp);
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
        delete_frontn(head);
        return;
    }
    
    while(i<pos && temp!=NULL)
    {
        temp=temp->next;
        i++;
       
    }
     temp->prev->next=temp->next;
     if(temp->next!=NULL)
     temp->next->prev=temp->prev;
     free(temp);
}
int main()
{
    int ch;
    node*head=NULL;
    xx:
    cout<<"\n\ninsert at beg..1\n";
    cout<<"insert at specified loc..2\n";
    cout<<"insert at end..3\n";
    cout<<"del from beg..4\n";
    cout<<"del from given loc..5\n";
    cout<<"del from end..6\n";
    cout<<"display ...7\n";
    cout<<"exit..8\n";
    cout<<"\nenter your choice : ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        insert_at_head(head,10);
        break;
        case 2:
        insert_at_pos(head,22,8);
        break;
        case 3:
        insert_at_end(head,2);
        insert_at_end(head,1);
        insert_at_end(head,3);
        insert_at_end(head,4);
        break;
        case 4:
        delete_frontn(head);
        break;
        case 5:
        del_posn(head,1);
        break;
        case 6:
        del_lastn(head);
        break;
        case 7:
        display(head);
        break;
        case 8:
        exit(0);
    }
    goto xx;
}   
