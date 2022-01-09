#include<iostream>
using namespace std;
/*void pairs(int *A,int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]<=k){
        for(int j=0;j<n;j++){
        if(A[j]<=k)
        {
            if(A[i]+A[j]==k)
            cout<<" pairs are "<<A[i]<<" , "<<A[j]<<endl;
        }
        }

    }
}
}*/

//approach 2 , only for sorted array
void pairs(int *A,int n,int k)
{
    int i=0,j;
    j=n-1;
   while(i<=j)
   {
      if(A[i]+A[j]== k)
     { cout<<"pairs are:"<<A[i]<<" , "<<A[j]<<endl;
     i++;
     j--;}
      
      else if(A[i]+A[j] > k)
      {
          j--;
      }
      else if(A[i]+A[j]< k) i++;

      }
}

int main()
{
    int n,k;
    cout<<"enter the size of array: ";
    cin>>n;
    int *A = new int [n];
    cout<<"enter the values inside the array:\n";
    for(int i=0;i<n;i++)
    cin>>A[i];
    cout<<"enter the value of k: ";
    cin>>k;
    pairs(A,n,k);

}