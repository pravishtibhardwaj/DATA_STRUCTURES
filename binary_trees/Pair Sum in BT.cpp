/*
Pair Sum Binary Tree
Given a binary tree and an integer S, print all the pair of nodes whose sum equals S.
Note:
1. Assume the given binary tree contains all unique elements.
2. In a pair, print the smaller element first. Order of different pairs doesn't matter.
*/
#include<vector>
#include<algorithm>
void ret_array(node*root,vector<int>&v)
{
    if(root==NULL)
    return;
    v.push_back(root->data);
    ret_array(root->lc,v);
    ret_array(root->rc,v);
    
}
void pair_sum(node*root,int k)
{
   
    if(root==NULL)
    return;
    vector<int>v;
    ret_array(root,v);
    sort(v.begin(),v.end());
    int i=0,j=v.size()-1;
    while(i<j)
    {
        if(v[i]+v[j]==k)
        {
            cout<<v[i]<<","<<v[j]<<endl;
            i++;
            j--;
        }
        else if(v[i]+v[j]>k)
        j--;
        else i++;

    }
}
