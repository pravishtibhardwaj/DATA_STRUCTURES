#include<iostream>
#include<algorithm>
using namespace std;
void shift_to_left(int *p,int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]<0)
        {
            swap(p[j],p[i]);
            j++;

        }
    }
    for(int i=0;i<n;i++)
    cout<<p[i]<<" ";
}
int main()
{
    int *p,n;
    cout<<"enter the size of the array:";
    cin>>n;
    p=new int[n];
    cout<<"ebter elements into the array:\n";
    for(int i=0;i<n;i++)
    cin>>p[i];
    shift_to_left(p,n);
}