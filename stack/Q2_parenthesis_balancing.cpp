#include<iostream>
#include<string.h>
using namespace std;
class node{
    public:
    node*next;
    char data;
    node()
    {
     next=NULL;
    }
};
class stack{
    public:
    node *top;
    stack()
    {
        top=NULL;
    }

    void push(char ch)
    {
        node*newnode=new node;
        if(newnode==NULL)
        {
            cout<<"stack overflow\n";
            return;
        }
        newnode->data=ch;
        newnode->next=top;
        top=newnode;


    }
    int isempty()
    {
        return top?0:1;
    }
    void pop()
    {
       if(isempty())
       {
           cout<<"stack underflow\n";
           return;
       }
       node*temp=top;
       top=top->next;
       free(temp);

    }
    

};
int isbalanced(char *exp)
    {
        stack st;
        for(int i=0;i<strlen(exp);i++)
        {
            if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
            {
               st.push(exp[i]);
            }
            else if((exp[i]=='}'&&st.top->data=='{')||(exp[i]==']'&&st.top->data=='[')||(exp[i]==')'&&st.top->data=='('))
            {
            if(st.isempty())
            {
                cout<<"stack underflow\n";
                return false;
            }
            else
            st.pop();
        }
        }
        return st.isempty()?true:false;

    }
    int main()
    {
        char exp[100];
        cout<<"enter the expression:";
        cin>>exp;
        cout<<isbalanced(exp);
    }
