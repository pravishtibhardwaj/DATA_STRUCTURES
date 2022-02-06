#include<iostream>
using namespace std;
void substring(string str,string ans)
{
    if(str.size()==0){
    cout<<ans<<endl;
    return;}
    char ch=str[0];
    string ros=str.substr(1);
    substring(ros,ans+ch);
    substring(ros,ans);

}
int main()
{
    string str;
    cout<<"enter the string:";
    getline(cin,str);
    substring(str,"");
}
