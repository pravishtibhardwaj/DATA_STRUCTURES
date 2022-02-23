// deleting root from max heap /////

#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int>&v,int i)
{
    int lchild=  2*i+1;
    int rchild=2*i+2;
    int largest=i;
    if(lchild < v.size() && v[lchild]>v[largest])
    {
    	largest=lchild;
	}
	if(rchild < v.size() && v[rchild]> v[largest])
	{
		largest=rchild;
	}
    if(largest!=i){
	swap(v[largest],v[i]);
	heapify(v,largest);
    }
}
void del_root_node(vector<int>&v)
{
     //replace the root node with last element 
     swap(v[0],v[v.size()-1]);
     v.pop_back();
     heapify(v,0);  //heapify the root node 

}
void print(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
int main()
{
    //vcetor containing elements of max heap
    vector<int>v={40,15,20,10,12,19,18};
    del_root_node(v);
    print(v);


}
