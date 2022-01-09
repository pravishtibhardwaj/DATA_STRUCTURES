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
    node*top;
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
    char pop()
    {
        if(top==NULL)
        {
            cout<<"stack underrflow\n";
            return '0';
        }
        node*temp=top;
        char x=temp->data;
        top=top->next;
        free(temp);
        return x;
    }
    int isoperand(char ch)
    {
        if(ch=='+'||ch=='-'||ch=='/'||ch=='*')
        return 0;
        else 
        return 1;
    }
    int precedence(char ch)
    {
        if(ch=='+'||ch=='-')
        return 1;
        else if(ch=='/'||ch=='*')
        return 2;
        else  if(ch=='^')
        return 3;
        else return 0;
    }


};
string  convert(string infix)
{
    
    string postfix="";
    stack st;

    for(int i=0;i<infix.length();i++)
   {     
        if(infix[i]=='(')
        st.push(infix[i]);
        else if(infix[i]==')')
        {
            while(st.top!=NULL && st.top->data!='(')
            postfix+=st.pop();
            if(st.top!=NULL)
            char c=st.pop();
        }
        else if(st.isoperand(infix[i]))
        postfix+=infix[i];
        
        

        else{ 
        while(st.top!=NULL && st.precedence(infix[i])<=st.precedence(st.top->data))
         postfix+=st.pop();
        st.push(infix[i]);
        
    }
    }
    while(st.top!=NULL)
    {
        postfix+=st.pop();
       
    }
  
    return postfix;
}
int main()
{ 
    string infix,postfix;
    cout<<"enter the infix expression:";
    cin>>infix;
    postfix=convert(infix);
     cout<<postfix;


}
// #include<iostream>
// #include<string.h>
// using namespace std;
// class node{
// public:
//     node*next;
//     char data;

// };
// class stack{
// public:
//     node*top;
//     stack()
//     {

//         top==NULL;
//     }
//     void push(char ch)
// {
//     node *newnode=new node;
//     newnode->data=ch;
//     if(newnode==NULL)
//     {
//         cout<<"stack overflow\n";
//         return;
//     }
//     newnode->next=top;
//     top=newnode;

// }
// char pop()
// {
    
//   node*temp=top;
//   if(top==NULL)
//   {
//       cout<<"stack underflow";
//       return '0';
//   }
//   char c=temp->data;
//   top=top->next;
//   delete temp;
//   return c;
// }
// void display()
// {
//     node*temp=top;
//   if(top==NULL)
//   {
//       cout<<"stack underflow";
//       return;
//   }
//   while(temp!=NULL)
//   {

//       cout<<temp->data<<endl;
//       temp=temp->next;
//   }

// }
// bool isempty()
// {


//   if(top==NULL)

//       return true;
//       else return false;
// }

// };
// int precedence(char ch)
// {
//     if(ch=='+' || ch=='-')
//         return 1;
//     else if( ch=='*' || ch=='/')
//         return 2;
//     else
//         return 0;

// }
// string infix_to_post(string exp)
// {
//     stack st;
//     int j=0;
//     string postfix;
//     for(int i=0;i<exp.length();i++)
//     {
//     if((exp[i]>='A' && exp[i]<='Z' ) || (exp[i]>='a' &&exp[i]<='z'))
//       postfix+=exp[i];
//       else  if(exp[i]=='(' )
//             st.push(exp[i]);
//       else if(exp[i]==')')
//       {
//           while(st.top!=NULL && st.top->data!='(')
//                     postfix+=st.pop();
//           if(st.top!=NULL)
//             char c=st.pop();
//       }
//       else {
//             if(precedence(exp[i])>precedence(st.top->data))
//         st.push(exp[i]);
//       else {
//         while(precedence(exp[i])<precedence(st.top->data))
//             postfix+=st.pop();
//       }
//       }
//     }
//     while(st.top!=NULL)
//         postfix+=st.pop();
//     return postfix;
// }
// int main()
// {
//     string exp,newexp;
//     // char *exp=new char;
//     cout<<"enter the expression:";
//     // cin.getline(exp,100);
//     getline(cin,exp);
//     // char *newexp=new char;
//     newexp=infix_to_post(exp);
//     // for(int i=0;i<strlen(newexp);i++)
//     cout<<newexp;
// }
