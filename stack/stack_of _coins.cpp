#include<bits/stdc++.h>
using namespace std;
#define n 100
class stacks{
    
    
    public:
    int top;
    int *arr1,*arr2,*arr3;
    stacks()
    {
    
        top=-1;
        arr1=new int [n];
        arr2=new int [n];
        arr3=new int [n];
    }
    void push1(int val){
        if(top==n-1)
        {
            return;
        }
        top=top+1;
        arr1[top]=val;
    }
     void push2(int val){
        if(top==n-1)
        {
            return;
        }
        top=top+1;
        arr2[top]=val;
    }
     void push3(int val){
        if(top==n-1)
        {
            return;
        }
        top=top+1;
        arr3[top]=val;
    }
    void pop()
    {
        if(top==-1)
            return;
        top--;
    }
        
};
int main() {
    
    int n1,n2,n3;
    int val;
    int sum1=0,sum2=0,sum3=0;
    cin>>n1>>n2>>n3;
    stacks s1,s2,s3;
    for(int i=0;i<n1;i++)
    {
        cin>>val;
        s1.push1(val);
        sum1=sum1+val;
        }
    for(int i=0;i<n2;i++)
    {
        cin>>val;
        s2.push2(val);
        sum2=sum2+val;
    }
    for(int i=0;i<n3;i++)
    {
        cin>>val;
        s3.push3(val);
        sum3=sum3+val;
    }
    if(sum1==sum2&&sum2==sum3)
        cout<<sum1;
    else if(sum1==0||sum2==0||sum3==0)
        cout<<'0';
    else{
    while(sum1!=sum2&&sum2!=sum3)
    {
    if(sum1<sum2&&sum1<sum3)
    {
        sum2=sum2-s2.arr2[s2.top];
        sum3=sum3-s3.arr3[s3.top];
        s2.pop();
        s3.pop();
        
    }
    else if(sum2<sum3&&sum2<sum1)
    {
         sum3=sum3-s3.arr3[s3.top];
         sum1=sum1-s1.arr1[s1.top];
        s3.pop();
        s1.pop();
    }
    else if(sum3<sum1&&sum3<sum2)
    {
         sum1=sum1-s1.arr1[s1.top];
         sum2=sum2-s2.arr2[s2.top];
        s1.pop();
        s2.pop();
    }
    else if(sum1<sum3&&sum2<sum3)
    {
         sum3=sum3-s3.arr[s3.top];
        s3.pop();
    }
    else if(sum2<sum1&&sum3<sum1)
    {
         sum1=sum1-s1.arr1[s1.top];
        s1.pop();
    }
    else if(sum1<sum2&&sum3<sum2)
    {
         sum2=sum2-s2.arr2[s2.top];
        s2.pop();
    }
    }
        cout<<sum1;
    }
    
	// Write your code here
}