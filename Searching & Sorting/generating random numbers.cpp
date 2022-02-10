//  WAP to implement a function Rdm(n) which returns an array of random
// numbers{between 0 to 99}, where n is the size of array
#include<iostream>
int *Rdm(int n)
{
int *arr=new int[n];
for(int i=0;i<n;i++)
{
arr[i]=0+(rand()%100);
}
return arr;
}
