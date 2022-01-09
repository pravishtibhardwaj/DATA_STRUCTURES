#include<iostream>
using namespace std;
#define n 100
class stack
{
 
    
     public:
     int top;
    int *arr;
    stack()
    {
        top=-1;
        arr=new int [n];
    }
    
   
  void push(int val)
{
    if(top==n-1)
    {
        cout<<"stack overflow \n";
        return;
    } 
    
    top=top+1;
    arr[top]=val;

} 
void display()
{
    if(top==-1)
    {
        cout<<"empty stack\n";
        return;
    }
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack underflow\n";
        return;
    }
    top--;
    

}
int val_at_pos(int pos)
{
    int x=-1;
  if(top-pos+1 < 0)
  cout<<"invalid position\n";
  else
  x=arr[top-pos+1];
  return x;
  
}
int Top(){
    if(top==-1)
    {
        cout<<"stack underflow\n";
        return 0;
    }
    return arr[top];
}
bool empty()
{
    if(top==-1)
    return true;
    else
    return false;
}
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.display();
    s.pop();
    cout<<"hello:"<<s.arr[s.top];
    cout<<"after deleting top most element :\n";
    s.display();
    cout<<"top most element : "<<s.Top()<<endl;
    cout<<"is empty ? = "<<s.empty()<<endl;
    cout<<"value at the given position="<<s.val_at_pos(5);
}