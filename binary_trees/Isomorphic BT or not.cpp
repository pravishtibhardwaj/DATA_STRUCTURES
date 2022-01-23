/*
Example 1:

Input:
 T1    1     T2:   1
     /   \        /  \
    2     3      3    2
   /            /
  4            4
Output: No

Example 2:

Input:
T1    1     T2:    1
    /  \         /   \
   2    3       3     2
  /                    \
  4                     4
Output: Yes   */

bool isIsomorphic(Node *root1,Node *root2)
    {
        if(root1==NULL && root2==NULL)
        return true;
        if(root1==NULL || root2==NULL)
        return false;
        if(root1->data!=root2->data)
        return false;
        return isIsomorphic(root1->left,root2->left)&&isIsomorphic(root1->right,root2->right) || isIsomorphic(root1->left,root2->right) &&isIsomorphic(root1->right,root2->left);
        
        
    //add code here.
    }
