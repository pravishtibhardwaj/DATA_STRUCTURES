#include<iostream>
#include "myheaderfile.h"    /// Rdm function created in this user defined header file
#include<time.h>

using namespace std;
void swap(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}
void bubble_sort(int *arr1,int n)
{
for(int i=0;i<n;i++)
{
 for(int j=0;j<n-1-i;j++)
 {
 if(arr1[j]>arr1[j+1])
 swap(arr1[j],arr1[j+1]);
 }
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
bubble_sort(arr1,n);
cout<<"\narray after sorting: ";
for(int i=0;i<n;i++)
cout<<arr1[i]<<" ";
}
