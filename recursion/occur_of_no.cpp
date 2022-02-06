#include<iostream>
using namespace std;
int first_occur(int arr[],int n, int j,int val)
{
    
    if(j==n)
        return -1;
     if(arr[j]==val)
        return j;
    
        
     first_occur(arr,n,j+1,val);
              
    
    
}
int last_occur(int arr[],int n,int i,int val)
{
    if(i==n)
    {
        return -1;
    
    }
    int restarr=last_occur(arr,n,i+1,val);
    if(restarr==-1 && arr[i]==val)
    return i;
    else
    return restarr;

}
int main()
{
    int arr[30],n,val,j=0;
    cout<<"enter the size of the array : ";
    cin>>n;
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   // cout<<arr[-1];
    cout<<"enter the value to be searched: ";
    cin>>val;
    cout<<first_occur(arr,n,j,val)<<endl;
    cout<<last_occur(arr,n,j,val);
 }
