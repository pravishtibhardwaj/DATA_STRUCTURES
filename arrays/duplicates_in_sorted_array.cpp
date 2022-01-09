#include<iostream>
#include<vector>
using namespace std;
void duplicate(int *A,int n)
{
    vector<int>B;
    for(int i=0;i<n;i++)
    {
           int j=0,c=0,temp=0,k=0;
       
        
        if(A[i]==A[i+1])
      {
         
           j=i+1;
           temp=A[i];
           B.push_back(temp);
           while(A[j]==temp)
           {
               j++;
               c++;
               i++;
           }
           
           cout<<"there are "<<c<<" duplicates of "<<A[i]<<endl;
       }
       else
        B.push_back(A[i]);
    }
       for(int i=0;i<B.size();i++)
       cout<<B[i]<<" ";
        

    
    
    
}
// approach 2
/*void duplicate(int *A,int n)
{
    int lastduplicate=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1]&&A[i]!=lastduplicate)
        {cout<<A[i];
        lastduplicate=A[i];}
    }
    }*/
int main()
{
    int size;
    cout<<"enter the size:";
    cin>>size;
    int *A=new int[size];
    cout<<"enter the elements into the array:\n";
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    duplicate(A,size);
}