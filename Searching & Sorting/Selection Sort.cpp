#include<iostream>
#include "myheaderfile.h" //user defined header file
#include<time.h>
using namespace std;
void swap(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}
void selection_sort(int *arr1,int n)
{
int min_i;
for(int i=0;i<n-1;i++)
{
  min_i=i;
 for(int j=i+1;j<n;j++)
 {
  if(arr1[j]<arr1[min_i])
  min_i=j;

}
swap(arr1[i],arr1[min_i]);
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
selection_sort(arr1,n);
cout<<"\narray after sorting: ";
for(int i=0;i<n;i++)
cout<<arr1[i]<<" ";
}
