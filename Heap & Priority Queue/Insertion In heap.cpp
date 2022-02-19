// MAX Heap
#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int>&v,int i)
{
    int parent=(i-1)/2;
    if(!v[parent])
    return;
    if(v[i]>v[parent])
    {
        swap(v[i],v[parent]);
        heapify(v,parent);
    }
}
void insert_node(vector<int>&v,int key)
{
    //inserting the element at the end of the array
    v.push_back(key);

    //since the new element is inserted at the end the properties of heap may be violated
    //heapify the newnode

    heapify(v,v.size()-1);
}
void print(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
int main()
{
    //vector containing elements of max heap
    vector<int>v={40,15,20,10,12,19,18};
    insert_node(v,35);
    print(v);


}
