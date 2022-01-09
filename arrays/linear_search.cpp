#include<iostream>
#include<algorithm>
using namespace std;
int search(int p[],int length)
{
    int key,flag=1;
 cout<<"enter the element to be searched:";
 cin>>key;
        
        for(int i=0;i<length;i++)
        {
            if(key==p[i])
            {
                swap(p[i],p[0]);// for improving the linear search ,so that next time wehen we find the same key we need not do much comparisions.
                //so to do this either swqap the element with the fisrt element as done above or swap with previous element one by one .


                return i;
                }
              
        }
        return -1;
}
int main()
{
   int *p,l;
   cout<<"enetrt thr size of the array:";
   cin>>l;
   p=new int[l];
   cout<<"eneter elements into the array:\n";
   for(int i=0;i<l;i++)
   {
       cin>>p[i];
   }
   cout<<search(p,l)<<endl;
   cout<<search(p,l);//this time the element will be at starting index
}