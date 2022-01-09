#include<iostream>
#include<queue>
using namespace std;
class stack{
    public:
    int size;
     queue<int>q1,q2;
     
     void push_s(int val)
     {
         q2.push(val);
        
         while(!q1.empty())
         {
             int x=q1.front();
             q1.pop();
             q2.push(x);

         }
         q1.swap(q2);
     }
     int  pop_s()
     {
         int x=q1.front();
         q1.pop();
        
         return x;
     }

    
};
int main()
{
    stack s;
    s.push_s(1);
    s.push_s(2);
    s.push_s(3);
    s.push_s(4);
    s.push_s(5);
    s.push_s(6);
    cout<<s.pop_s();
     cout<<s.pop_s();
      cout<<s.pop_s();


}