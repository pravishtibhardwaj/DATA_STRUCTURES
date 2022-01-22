/*
Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /   \     /  \
  4     5   6    7
   \
     8   */


vector<int> leftView(Node *root)
{
    vector<int>v;
     if(root==NULL)
         return v;
         queue<pair<Node*,int>>q;
         map<int,int>m;
         q.push({root,0});
         while(!q.empty())
         {
             Node*temp=q.front().first;
             int hd=q.front().second;
             q.pop();
             if(m[hd]==0)
             {
                 m[hd]=temp->data;
             }
             if(temp->left)
             q.push({temp->left,hd+1});
             if(temp->right)
             q.push({temp->right,hd+1});
         }
         for(auto it:m)
         v.push_back(it.second);
         return v;
   // Your code here
}
