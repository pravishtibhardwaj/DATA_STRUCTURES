/*Given a Binary Tree of size N , where each node can have positive or negative values.
Convert this to a tree where each node contains the sum of the left and right sub trees of the original tree.
The values of leaf nodes are changed to 0.*/
int sum(Node*node)
 {
      if(node==NULL)
      return 0;
      int x1=sum(node->left);
      int x2=sum(node->right);
      int x=node->data;
      node->data=x1+x2;
      return x1+x2+x;
      
 }
  
 void toSumTree(Node *node)
 {
        sum(node);
 }
