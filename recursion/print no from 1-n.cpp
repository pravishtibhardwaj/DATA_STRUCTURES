#include<iostream>
using namespace std;
void  print(int n)
{
    if(n>0)
    {
       
        print(n-1);
         cout<<n<<" ";

    }
}
int main()
{
    int x;
    cin>>x;
    print(x);
}
