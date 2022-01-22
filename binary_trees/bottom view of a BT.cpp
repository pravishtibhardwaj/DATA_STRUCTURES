/*  
Input:

         10
       /    \
      20    30
     /  \
    40   60
Output: 40 20 60 30  */


vector <int> bottomView(Node *root) {
        // Your Code Here
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
            m[hd]=temp->data;
             if(temp->left)
             q.push({temp->left,hd-1});
             if(temp->right)
             q.push({temp->right,hd+1});
        }
        for(auto it:m)
         v.push_back(it.second);
         return v;
         
    }
