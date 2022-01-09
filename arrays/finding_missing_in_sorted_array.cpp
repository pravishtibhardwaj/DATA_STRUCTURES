#include<iostream>
using namespace std;
// 1st approach for finding single missing element in the array
/*int missing(int *A,int n)
{
    int c=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]!=c)
            return c;
             
             else 
             c++;
    }
    
}*/
// 2nd approach (more than one missing element )
int missing(int *A,int n){
    int l=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]-i != l)
        {
            while(l<A[i]-i)
            {
            cout<<"missing element = "<<l+i<<endl;
            l++;
            } 

        }


    }
}
int main()
{
    int size;
    cout<<"enter the size :";
    cin>>size;
    
    int *A=new int [size];
    cout<<"enter the elements into the array:\n";
    for(int i=0;i<size;i++)
    cin>>A[i];
    missing(A,size);
}
