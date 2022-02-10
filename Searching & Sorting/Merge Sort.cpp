#include<iostream>
#include<time.h>
#include "myheaderfile.h"
using namespace std;
void merge(int *arr1,int l,int mid,int h)
{
int n1=mid-l+1;
int n2=h-mid;
int *t1=new int[n1];
int *t2=new int[n2];
int p1=0,p2=0,p3=l;
for(int i=0;i<n1;i++)
t1[i]=arr1[l+i];
for(int i=0;i<n1;i++)
t2[i]=arr1[mid+1+i];
while(p1<n1&&p2<n2)
{
if(t1[p1]<t2[p2])
arr1[p3++]=t1[p1++];
else
arr1[p3++]=t2[p2++];
}
while(p1<n1)
arr1[p3++]=t1[p1++];
while(p2<n2)
arr1[p3++]=t2[p2++];
cout<<"\npass by pass:\n";
for(int i=0;i<=h;i++)
cout<<arr1[i]<<" ";
}
void merge_Sort(int *arr1,int l,int h)
{
int mid;
if(l<h)
{
mid=(l+h)/2;
merge_Sort(arr1,l,mid);
merge_Sort(arr1,mid+1,h);
merge(arr1,l,mid,h);
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
merge_Sort(arr1,0,n-1);
cout<<"\narray after sorting: ";
for(int i=0;i<n;i++)
cout<<arr1[i]<<" ";
delete []arr1;
}
