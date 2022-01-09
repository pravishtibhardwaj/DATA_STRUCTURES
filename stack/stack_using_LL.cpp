#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    
};
class Stack{

private:
node *top;
public:
Stack()
{
    top=NULL;

}
void push(int val)
{
   node *newnode=new node;
   if(newnode==NULL){
   cout<<"stack overflow\n";
   return;
   }
   newnode->data=val;
   newnode->next=top;
   top=newnode;


}
void pop()
{
    if(top==NULL)
    {
        cout<<"stack underflow\n";
        return ;
    }
    node*temp=top;
    top=top->next;
    delete temp;
    
}
void display()
{
    if(top==NULL)
    {
        cout<<"stack underflow\n";
        return ;
    }
    node*temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
};



int main()
{
   Stack s; 
    s.push(3);
    s.push(4);
    s.push(1);
    s.push(5);
    s.push(2);
    s.push(6);
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<"\nafter deleting :";
    s.display();

}
