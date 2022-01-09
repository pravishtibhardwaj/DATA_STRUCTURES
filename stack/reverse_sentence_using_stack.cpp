#include<iostream>
#include<sstream>
using namespace std;
class node{
    public:
    node*next;
    string data;

};
class stack{
    public:
    node*top;
    stack()
    {
        top=NULL;
    }
    void push(string word)
    {
        node *newnode=new node; 
        if(newnode==NULL)
        {
            cout<<"stack overflow\n";
            return;
        }
        newnode->data=word;
        newnode->next=top;
        top=newnode;
    }
    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack underflow\n";
            return;
        }
        node*temp=top;
        top=top->next;
        free(temp);
    }
    void display()
    {
        if(top==NULL)
        {
            cout<<"stack underflow\n";
            return;
        }
        while(top!=NULL)
        {
            cout<<top->data<<" ";
            top=top->next;
        }
    }
};
int main()
{
    stack st;
  string sen;
  
  cout<<"enter the sentence : ";
  getline(cin,sen);
  stringstream s(sen); 
  string word;
  while(s>>word)
  {
      st.push(word);
  } 
  
  st.display();

}