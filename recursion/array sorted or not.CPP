#include<iostream>
using namespace std;
bool sorted(int arr[],int n)
{
  if(n==1)
  return true;
  bool restarr=sorted(arr+1,n-1);
  return (arr[0]<arr[1] && restarr);
}
  
int main()
{
    int x,arr[100];
    cin>>x;
    cout<<"enter array elements:";
    for(int i=0;i<x;i++)
    cin>>arr[i];
    cout<<"result="<<sorted(arr,x);
}
