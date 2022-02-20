#include<iostream>
#include<vector>
using namespace std;

// considering larger the element highest the priority
class priority_queue
{
    vector<int>pq;
    public:
    int getMAX()
    {
       if(pq.size()==0)
       return -1;
       return pq[0];
    }
void UPheapify(vector<int>&v,int i)
{
    int parent=(i-1)/2;
    if(!v[parent])
    return;
    if(v[i]>v[parent])
    {
        swap(v[i],v[parent]);
        UPheapify(v,parent);
    }
}
    void insert(int key)
    {
        //inserting the element at the end of the array
    pq.push_back(key);

    //since the new element is inserted at the end the properties of heap may be violated
    //heapify the newnode

    UPheapify(pq,pq.size()-1);

    }

    void DownHeapify(int i)
{
    int lchild=  2*i+1;
    int rchild=2*i+2;
    int largest=i;
    if(lchild < pq.size() && pq[lchild]>pq[largest])
    {
    	largest=lchild;
	}
	if(rchild < pq.size() && pq[rchild]> pq[largest])
	{
		largest=rchild;
	}
    if(largest!=i){
	swap(pq[largest],pq[i]);
	DownHeapify(largest);
    }
}

    void delete_maxele()
    {
        swap(pq[0],pq[pq.size()-1]);
        pq.pop_back();
        DownHeapify(0);
    }

    void print()
{
    for(int i=0;i<pq.size();i++)
    cout<<pq[i]<<" ";
}
};

int main()
{
    priority_queue p;
    p.insert(10);
    p.insert(4);
    p.insert(30);
    p.insert(19);
    p.insert(45);
    p.insert(8);

    cout<<"highest priority element "<<p.getMAX()<<endl;
    p.delete_maxele();

    p.print();
}
