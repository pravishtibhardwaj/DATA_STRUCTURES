#include<iostream>
using namespace std;
void hashing(int *A,int *B,int n,int m)
{
    int j=0;
    for(int i=0;i<n;i++)
    {                                                  // O(n) complexity
        B[A[i]]++;
    }
      for(int i=0;i<m;i++){
        if(B[i]>1)
       cout<<i<<" has "<<B[i]-1 <<" duplicates."<<endl;
       
       }
   /* while(j<m){
    for(int i=0;i<n;i++)
    {
       if(j==A[i])                              this approach is also correct but time
       {                                        consuming.O(n^2) complexity 
           B[j]++;                              
       }
      
    }
    if(B[j]>1)
       cout<<j<<" has "<<B[j]<<" duplicates."<<endl;
    j++;
    }*/
  
    
}
int main()
{
    int size;
    cout<<"enter the size if the array:";
    cin>>size;
    int *A=new int [size];
    cout<<"enter the elements into the array\n";
    for(int i=0;i<size;i++)
    {
        cin>>A[i];

    }
    int size2=A[size-1]+1;
    int *B=new int [size2];
    for(int i=0;i<size2;i++)
    B[i]=0;
    hashing(A,B,size,size2);
}