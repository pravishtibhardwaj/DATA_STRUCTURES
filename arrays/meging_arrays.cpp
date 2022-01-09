#include<iostream>
using namespace std;
void merge(int *A1,int *A2,int *A3,int n1,int n2)
{
    int  p1=0, p2=0, p3=0;
   
    while(p1<n1 && p2<n2){
    if(A1[p1]<A2[p2])
    {
        A3[p3++]=A1[p1++];
    }
    /*else if(A1[p1]==A2[p2])  when we need to find the union of two sets .
   { A3[p3++]=A1[p1];
    p1++;
    p2++;}*/
    else
    A3[p3++]=A2[p2++];
    }
    while(p1<n1)
    {
        A3[p3++]=A1[p1++];

    }
    while(p2<n2)
    {
        A3[p3++]=A2[p2++];
    }
    cout<<"merged array:\n";
    for(int i=0;i<(n1+n2);i++)
    cout<<A3[i]<<" ";
}
int main()
{
    int n1,n2;
    cout<<"entert the size of the two arrays:";
    cin>>n1>>n2;
    int *A1=new int[n1];
    int *A2=new int[n2];
    int *A3=new int[n1+n2];
    cout<<"enter the elements into array 1:\n";
    for(int i=0;i<n1;i++)
    cin>>A1[i];
    cout<<"enter the elements into array 2:\n";
    for(int i=0;i<n2;i++)
    cin>>A2[i];
    merge(A1,A2,A3,n1,n2);

}