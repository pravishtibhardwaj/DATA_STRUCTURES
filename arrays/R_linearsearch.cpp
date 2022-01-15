//recursive linear search program
#include<iostream>
using namespace std;
int rec_linear(int *arr,int n,int key)
{
    if(n==0)
    return -1;
    if(key==arr[n-1])
    return n-1;
    rec_linear(arr,n-1,key);

}
int main()
{
    int n,key;
    cout<<"enter the size:";
    cin>>n;
    int *arr=new int [n];
    cout<<"enter the values into the array:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"enter the element to be searched:";
    cin>>key;
    cout<<"at index:"<<rec_linear(arr,n,key);
}
