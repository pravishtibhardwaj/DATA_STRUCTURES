#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>&v,int n,int i)
{
    int largest=i;
    int lchild=2*i+1;
    int rchild=2*i+2;
    if(lchild < n && v[lchild] > v[largest])
    largest=lchild;

    if(rchild < n && v[rchild] > v[largest])
    largest = rchild;
    
    //base condition for the recursion
    if(largest != i )
    {
       swap(v[largest],v[i]);
       heapify(v,n,largest);
    }
    
    
}
void heapSort(vector<int>&v,int n)
{
    //converting gien seq of no.s into a max heap
    for(int i=n/2 -1 ;i>=0;i--)
    heapify(v,n,i);             ///since all leaf nodes are automatically in heap therefore heapifying from the last second level


    for(int i=n-1;i>0;i--)
    {
        //movinf current  root to last position  and then heapifying the new root
        swap(v[0],v[i]);
        heapify(v,i,0);
    }


}
void print(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
int main()
{
    vector<int>v={0,10,20,30,25,5,40,35};
    heapSort(v,v.size());
    print(v);
}
