// elements must be sorted
#include<iostream>
using namespace std;
class binary
{
    private:
    int *A,length,size;
    public:
    binary(int size)
    {
        this->size=size;
        A=new int[size];
    }
    void create()
    {
        cout<<"enter no of elements you want to enter : ";
        cin>>length;
        cout<<"enter the elements into the array:\n";
        for(int i=0;i<length;i++){
            cin>>A[i];
        }
    }
        int b_search()
        {
            int val,mid,beg,end ;
            beg=0;
            end=length-1;
            cout<<"enter the element to be searched:";
            cin>>val;
            while(beg<=end){
            
            mid=(beg+end)/2;
            if(val==A[mid])
            return mid;
            else
            if(val>A[mid])
            {
                beg=mid+1;
            }
            else
            end=mid-1;
            }
            return -1;

        }
        
    };
    int main()
    {
        binary b(20);
        b.create();
        int d=b.b_search();
        if(d==-1)
        cout<<"element not found\n";
        else
        cout<<"element found at index: "<<d;
    }

    
