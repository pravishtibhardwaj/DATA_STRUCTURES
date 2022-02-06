#include<iostream>
using namespace std;
//APPROACH 1
// double e(int x,int n)
// {
//     static double p=1,f=1;
//     double r;
//     if(n==0)
//     return 1;
//     else
//     {
//     r=e(x,n-1);
//     p=p*x;
//     f=f*n;
//     r=r+p/f;
//     return r;
//     }
// }
// int main()
// {
//     int x,n;
//     cout<<"enter the values of x and n:";
//     cin>>x>>n;
//     cout<<e(x,n);
// }

//APPROACH 2 
double e(int x,int n)
{
     static double s;
     if(n==0)
     return s;
     
     s= 1+s*x/n;
     return  e(x,n-1);
    
      
     
}
int main()
{
    int x,n;
    cout<<"enter the values of x and n:";
    cin>>x>>n;
    cout<<e(x,n);
}
