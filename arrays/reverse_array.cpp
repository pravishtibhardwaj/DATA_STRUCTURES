#include<iostream>
#include<algorithm>
using namespace std;
void reverse(int *p,int n,int i)
{
    int k;
    // if(n%2==0)
    // {
    //     k=n/2+1;

    // }
    // else
    k=n/2;
    while(i<k)
    {
        swap(p[i],p[n-1-i]);
        i++;
    }
    for(int i=0;i<n;i++)
    cout<<p[i]<<" ";
}
int main()
{
    int *p,size,i=0;
    cout<<"enter the size of the array:";
    cin>>size;
    p=new int[size];
    cout<<"enter the values into the array:\n";
    for(int i=0;i<size;i++)
    cin>>p[i];
    reverse(p,size,i);


    }