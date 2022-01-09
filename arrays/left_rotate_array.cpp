#include<iostream>
using namespace std;
void left_rotate(int *p,int size,int t)
{
    int temp;
    while(t--){
        temp=p[0];
    for(int i=0;i<size;i++)
    {
        
        p[i]=p[i+1];
        

    }
    p[size-1]=temp;
    }

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
    cout<<"enter by how many elements you want to rotate the array:";
    cin>>n;
    left_rotate(p,size,n);


    }
