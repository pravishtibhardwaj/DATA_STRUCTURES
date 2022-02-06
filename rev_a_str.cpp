#include<iostream>
using namespace std;
void rev(string str)
{
   if(str.length()==0)
   return ;
   string s=str.substr(1);
   rev(s);

   cout<< str[0];

}
int main()
{
    string str;
   
    getline(cin,str);
    
    rev(str);
}