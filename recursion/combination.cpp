#include<iostream>
using namespace std;
//with recursion
int pascal(int n,int r)
{
    if(n<r)
    return -1;
    if(n==r  || r==0)
    return 1;
    return pascal(n-1,r-1)+pascal(n-1,r); 
}
//without recursion
// int fact(int x)
// {
//     if(x==0)
//     return 1;
//     return x*fact(x-1);
// }
// int pascal(int n,int r)
// {
    
//     int f1,f2,f3;
//     f1=fact(n);
//     f2=fact(r);
//     f3=fact(n-r);
//     return f1/(f2*f3);
// }
int main()
{
    int n,r;
    cout<<"enter n and r:";
    cin>>n>>r;
    cout<<pascal(n,r);
}