#include<iostream>
using namespace std;
class array
{
    private:
    int *p;
    int size;
    int length;
    public:
    array(int size)
    {
        this->size=size;
        p=new int[size];
    }
    void create(){
        cout<<"enter number of elements to be inserted :";
        cin>>length;
        cout<<"enter the elements into the array:";
        for(int i=0;i<length;i++)
        {
            cin>>p[i];
        }
    }
    void insert()
    {
        int pos,val;
        cout<<"enter the index and the value to be inserted : ";
        cin>>pos>>val; 
        if(pos>length)
        {

            cout<<"\ncannot insert\n";
            return;
        }
        for(int i=length;i>pos;i--)
        {
            p[i]=p[i-1];
        }
        p[pos]=val;
        length++;
        cout<<"\nelement inserted\n";


    }
    void del()
    {
        int x;
        cout<<"enetr the index of element to be deleted : ";
        cin>>x;
        p[length]=p[x];
        for(int i=x;i<length-1;i++)
        {
             p[i]=p[i+1];
        }
        length--;
        for(int i=0;i<length-1;i++)
         cout<<p[i]<<" ";

    }
   /* void del()
    {
        int ele,in,flag=1;
        cout<<"enter the element to be deleted:";
        cin>>ele;
        for(int i=0;i<length;i++)
        {
            if(ele==p[i])
            {
                in=i;
                remove(in);
                }
                else
                flag=0;
        }
        if(flag==0)
        cout<<"\nelement not found\n";
         for(int i=0;i<length;i++)
         cout<<p[i]<<" ";
    }
    void remove(int in)
    {
        for(int i=in;i<length-1;i++)
        {
            p[i]=p[i+1];
        }
        length--;
        
     }*/
    void display(){
        cout<<"array:\n";
        for(int i=0;i<length;i++)
        {
            cout<<p[i]<<" ";
        }    
        }
        ~array()
        {
            delete[]p;
            cout<<"\np destroyed\n";
        }
};
int main()
{
    array a(10);
    a.create();
    a.insert();
    a.display();
    a.del();
}
    


