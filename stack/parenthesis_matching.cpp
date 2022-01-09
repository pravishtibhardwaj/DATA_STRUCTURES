#include<iostream>
#include<string.h>
using namespace std;
class node{
    public:
    node*next;
    char data;
};
class stack{
     
    
    
     public:
      node* top;
     stack()
     {
     
        top=NULL;
        
     } 
     void push(char ch)
     {
         node *newnode=new node;
         if(newnode==NULL)
         {
             cout<<"stack overflow\n";
               return;
           
         }
         newnode->data=ch;
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
    int isempty()
    {
        if(top==NULL)
        return 1;
        else
        return 0;

    }
};
int isbalanced(char *exp)
    {
       stack st;
       for(int i=0;i<strlen(exp);i++)
       {
           if(exp[i]=='(')
           st.push(exp[i]);
           else if(exp[i]==')')
           {
               if(st.isempty())
               return false;
               else
               st.pop();
           }
       }
       return (st.isempty())?true:false;
    }

int main()
{
    char exp[100];
    cout<<"enter the expression: ";
    cin>>exp;
    cout<<isbalanced(exp)<<endl;

}
// class node{
//     public:
//     node*next;
//     char data;
//     node(char data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void push(node*&top,char ch)
// {
//     node*newnode=new node(ch);
//     if(newnode==NULL)
//     return;
//     newnode->next=top;
//     top=newnode;
// }
// void pop(node*&top)
// {
//     node*temp=top;
//     if(top==NULL)
//     return;
//     top=top->next;
//     delete temp;

// }
// bool isempty(node*top)
// {
//     if(top==NULL)
//     return true;
//     else return false;
// }
// void valid_par(node*top)
// {
//     node*temp=top;
//     while(temp!=NULL && !(isempty(top))){
//     if(temp->ch=='(' || temp->ch=='[' || temp->ch=='{')
//     push(top,temp->data);
//     else if((temp->data==')' && top->data=='(') || (temp->data==']' && top->data=='[') || (temp->data=='}' && top->data=='{'))
//     pop(top);
//     }
//     if(!isempty(top))
//     cout<<"invalid";
//     else cout<<"valid";
// }
// int main()
// {
//     node*top=NULL;
    

// }