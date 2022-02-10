#include<iostream>
#include<time.h>
#include "myheaderfile.h"
using namespace std;
void swap(int &a,int &b)
{

int temp;
temp=a;
a=b;
b=temp;
}
int partition(int *arr,int l,int h)
{
int p=l+1;
int q=h;
int pivot=arr[l];
while(p<=q)
{
while(arr[p]<=pivot)
{
p++;
}
while(arr[q]>pivot)
{
q--;
}
if(p<q)
swap(arr[p],arr[q]);
}
swap(arr[q],arr[l]);
cout<<"\npass by pass:\n";
for(int i=0;i<=h;i++)
cout<<arr[i]<<" ";
return q;
}
void quick_sort(int *arr,int l,int h)
{
int pivot_loc;
if(l<h){
pivot_loc=partition(arr,l,h);
quick_sort(arr,l,pivot_loc-1);
quick_sort(arr,pivot_loc+1,h);
}
}
int main()
{
srand(time(0));

int n;
cout<<"enetr n:";
cin>>n;
int *arr1=new int(n);
arr1=Rdm(n);
cout<<"array before sorting: ";
for(int i=0;i<n;i++)
cout<<arr1[i]<<" ";
quick_sort(arr1,0,n-1);
cout<<"\narray after sorting: ";
for(int i=0;i<n;i++)
cout<<arr1[i]<<" ";
}
