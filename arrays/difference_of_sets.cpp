#include<iostream>
using namespace std;
void intersection(int *A1,int *A2,int *A3,int n1,int n2)
{
    int  p1=0, p2=0, p3=0,c=0;
     while(p1<n1 && p2<n2){           
          if(A1[p1]<A2[p2])        
          {
              p1++;
          }
          else if(A1[p1]>A2[p2])
          p2++;
        
   else if(A1[p1]==A2[p2])
    {
        
        p1++;
        p2++;
        
    }
     }
      cout<<"after intersection :\n";
    for(int i=0;i<c;i++)               /// c is zero and *A3 is empty
    cout<<A3[i]<<" ";
}
int main()
{
    int n1,n2;
    cout<<"entert the size of the two arrays:";
    cin>>n1>>n2;
    int *A1=new int[n1];
    int *A2=new int[n2];
    int *A3=new int[n1];
    cout<<"enter the elements into array 1:\n";
    for(int i=0;i<n1;i++)
    cin>>A1[i];
    cout<<"enter the elements into array 2:\n";
    for(int i=0;i<n2;i++)
    cin>>A2[i];
    diff(A1,A2,A3,n1,n2); /// this function is not available in your program
 
}
