//recursive method
#include<iostream>
#include<stack>
using namespace std;
class queue{
    public:
    stack<int>s1;
    void enqueue(int val)
    {
        s1.push(val);
    }
    int dequeue()
    {
         if(s1.empty())
         {
             cout<<"queue is empty\n";
             return -1;
         }
         int x=s1.top();
         s1.pop();
         if(s1.empty())
         return x;
         int item=dequeue();
         s1.push(x);
         return item;
    }
};
int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    while(!q.s1.empty())
    cout<<q.dequeue();
}