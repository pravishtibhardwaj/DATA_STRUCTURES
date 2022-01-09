#include<iostream>
using namespace std;
void right_shift(int *p,int size,int no)
{
    int temp;
    while(no--){
        temp=p[size-1];
    for(int i=size;i>0;i--)
    {
        p[i]=p[i-1];

    }
    p[0]=temp;}

    for(int i=0;i<size;i++)
    cout<<p[i]<<" ";

}



int main()
{
    int *p,size,n;
    cout<<"enter the size of the array:";
    cin>>size;
    p=new int[size];
    cout<<"enter the values into the array:\n";
    for(int i=0;i<size;i++)
    cin>>p[i];
    cout<<"enter by how many elements you want to shift the array:";
    cin>>n;
    right_shift(p,size,n);


    }
