#include<iostream>
#include<queue>
using namespace std;
class stack{
    public:
    queue<int>q1,q2;
    void push_s(int val)
    {
        q1.push(val);
    }
    int pop_s()
    {
        if(q1.empty())
        return -1;
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();

        }
        int x=q1.front();
        q1.pop();
        q1.swap(q2);
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