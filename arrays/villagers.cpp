#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the number of villages:";
    cin>>n;
    int arr[n];
    cout<<"enter populaton of each vilage:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++)
    {
       sum=arr[i]+arr[n-1-i];
       cout<<sum/10<<" "<<sum%10;
       cout<<endl;
    }

}