/* given a binary tree and a key node . Find path from root to the key node .
--> path refers to the collection of all nodes from root to the given node  */
#include<vector>
bool check_path(node*root,vector<int>&v,int key)
{
    if(root==NULL)
    return false;
    v.push_back(root->data);
    if(root->data==key)
    return true;
    if(check_path(root->lc,v,key) || check_path(root->rc,v,key))
    return true;
    v.pop_back();
    return false; 

}
void Find_path(node*root,int key)
{
    vector<int>v;
     if(root==NULL)
     return ;
     if(check_path(root,v,key))
     {
        for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1)
        cout<<"-->";
        }
     }
     else cout<<"path donot exist\n";
     
}
