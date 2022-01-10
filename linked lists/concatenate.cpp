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
void insert(node*&head,int val)
{
    node*new_node=new node(val);
    if(head==NULL){
    head=new_node;
    return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp->next=new_node;
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
}
node* concatenate(node*&head1,node*head2)
{
   if(head1==NULL)
   return head2;
   if(head2==NULL)
   return head1;
   node*temp=head1;
   while(temp->next!=NULL)
   {
       temp=temp->next;
   }
   temp->next=head2;
   return head1;
}
int main()
{
    node*head1=NULL;
    node*head2=NULL;
    insert(head1,1);
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    cout<<"llist 1:\n";
    display(head1);
    insert(head2,5);
    insert(head2,6);
    insert(head2,7);
    cout<<"\nlist 2:\n";
    display(head2);
    node*newhead=concatenate(head1,head2);
    cout<<"\nlist 2 gets concatenated into the first list\n";
    display(newhead);

}