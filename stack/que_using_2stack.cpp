#include<iostream>
using namespace std;
class node{
    public:
    node*next;
    int data;
    node(int data){
        this->data=data;
        next=NULL;
    }

};
class stack{
    public:
    node*top;
    stack()
    {
        top=NULL;
    }
  void push(int val)
{
    node*newnode=new node(val);
    if(newnode==NULL)
    return;
    if(top==NULL)
    {
        top=newnode;
        return;
    }
    newnode->next=top;
    top=newnode;
}
int pop()
{
    int d;
    if(top==NULL)
    return -1;
    node*todel=top;
    d=todel->data;
    top=top->next;
    return d;
}
void display()
{
    node*temp=top;
    if(top==NULL)
    {
        cout<<"empty queue";
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
};
class queue{
    public:
    stack s1,s2;
    void enqueue(int val)
    {
      s1.push(val);
     }
int dequeue()
{
    if(s2.top==NULL)
    {
        if(s1.top==NULL)
        {
            cout<<"queue is empty \n";
            return -1;
        }
    while(s1.top!=NULL)
    {
        s2.push(s1.pop());
    }
        
    }
    
    return s2.pop();
}
void print()
{
    s2.display();
}

};



int main()
{

    queue q;
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.dequeue();
    cout<<q.dequeue()<<" ";
    cout<<q.dequeue();
    cout<<endl;
    q.print();
    


    
    
}


