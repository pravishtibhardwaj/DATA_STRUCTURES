#include<iostream>
#include "myheaderfile.h"
#include<time.h>
using namespace std;
void insertion_sort(int *arr1,int n)
{
int key;
for(int i=1;i<n;i++)
{
int j;
key=arr1[i];
j=i-1;
while(j>=0&&arr1[j]>key)
{
arr1[j+1]=arr1[j];
j--;
}
arr1[j+1]=key;
cout<<"\nafter "<<i+1<<" pass"<<endl;
for(int i=0;i<n;i++)
cout<<arr1[i]<<" ";
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
insertion_sort(arr1,n);
cout<<"\narray after sorting: ";
for(int i=0;i<n;i++)
cout<<arr1[i]<<" ";
}
