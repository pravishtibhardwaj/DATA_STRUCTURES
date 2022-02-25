//code by pravishtibhardwaj
#include<bits/stdc++.h>
using namespace std;
void shellSort(int *&arr,int n)
{
    int gap=n/2;
    int j;
    while(gap>=1)
    {
        for(int i=gap;i<n;i++)
        {
        j=i-gap;
        int temp=arr[i];
        while(j>=0 && arr[j]>temp)
        {
            arr[j+gap]=arr[j];
            j=j-gap;
        }
         arr[j+gap]=temp;
        }
        gap=gap/2;
    }
    

}
int main()
{
    int n;
    cin>>n;
    int *arr=new int();
    for(int i=0;i<n;i++)
    cin>>arr[i];
    shellSort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
