#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int *p,n,val;
    cout<<"enter the size of the array:";
    cin>>n;
       p=new int[n];
       cout<<"enter the values into the array:\n";
       for(int i=0;i<n;i++)
       cin>>p[i];
       cout<<"enter the value to be inserted:";
       cin>>val;
       p[n]=val;
       int no=n;

   
        while( p[no]<p[no-1])
        {
           swap(p[no],p[no-1]);
           no--;
           
        }
        n++;
        for(int i=0;i<n;i++)
        cout<<p[i]<<" ";
    
}