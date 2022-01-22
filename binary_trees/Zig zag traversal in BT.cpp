/*
           7
        /     \
       9       7
     /  \     /   
    8    8   6     
   /  \
  10   9 
Output:
7 7 9 8 8 6 9 10   */

vector <int> zigZagTraversal(Node* root)
    {
    	int level = 1;
    	vector<int> v;
    	queue<Node*> q;
    	q.push(root);
    	while(!q.empty()){
    	    vector<int> temp;
    	    int size = q.size();
    	    while(size--){
    	        temp.push_back(q.front()->data);
    	        if(q.front()->left) q.push(q.front()->left);
    	        if(q.front()->right) q.push(q.front()->right);
    	        q.pop();
    	    }
    	    if(level % 2 == 0)
    	        reverse(temp.begin(), temp.end());
	        for(int i=0; i<temp.size(); i++)
	            v.push_back(temp[i]);
            level++;
    	}
    	return v;
    }
