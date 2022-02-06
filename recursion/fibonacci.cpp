#include<iostream>
using namespace std;
int fib(int n)
{
    int sum=0;
    if(n==0 || n==1)
    return n;
     sum=fib(n-2)+fib(n-1);
   return sum;
}
int sum1(int n)
{
    int t=0;
    
    for(int i=1;i<=n;i++)
    t=t+fib(i);
    return t;

}
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<sum1(n);
}