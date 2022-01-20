/*
Given two BSTs containing N1 and N2 distinct nodes respectively and given a value x. 
Your task is to complete the function countPairs(), that returns the count of all pairs from both the BSTs whose sum is equal to x.
BST1:
       5
     /   \
    3     7
   / \   / \
  2   4 6   8

BST2:
       10
     /    \
    6      15
   / \    /  \
  3   8  11   18

x = 16
Output:
3
Explanation:
The pairs are: (5, 11), (6, 10) and (8, 8)
*/
void inorder(Node*root,vector<int>&v)
    {
        if(root==NULL)
        return ;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
        
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
       int c=0;
       if(root1==NULL && root2==NULL)
       return c;
        vector<int>v1;
        inorder(root1,v1);
        
        vector<int>v2;
        inorder(root2,v2);
       
        int i=0,j=v2.size()-1;
        while(i<v1.size() && j>=0)
        {
            if(v1[i]+v2[j]==x){
                i++;
                j--;
                c++;
            }
            else if(v1[i]+v2[j] > x)
            j--;
            else 
                i++;
        }
        return c;
      
    }

