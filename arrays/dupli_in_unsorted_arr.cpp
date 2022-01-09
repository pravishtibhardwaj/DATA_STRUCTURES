#include<iostream>
using namespace std;



void dupli_in_unsorted_arr(int *A,int *B,int n,int m)
{
    int j=0;
    for(int i=0;i<n;i++)
    {        
                                              // O(n) complexity
        B[A[i]]++;
    }
      for(int i=0;i<m;i++){
        if(B[i]>=1)
       cout<<i<<" has "<<B[i]<<" duplicates."<<endl;
       
       }
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
    int max=A[0];                              //FOR HASHING WE NEED THE MAXIMUM EELEMENT 
    for(int i=0;i<size;i++)                    //  IN THE ARRAY
    {
        if(A[i]>max)
        max=A[i];
    }
    int size2=max+1;

    
    int *B=new int [size2];
    for(int i=0;i<size2;i++)
    B[i]=0;
    dupli_in_unsorted_arr(A,B,size,size2);
}
