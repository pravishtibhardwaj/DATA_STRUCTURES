//time complexity - O(n)
//space complexity - O(1)


//function to count and number of nodes in binary search tree
int morris_traversal(node*root)
{
    if(root== NULL)
    return 0;
    node*cur=root;
    node*pre=cur;
    int count=0;
    while(cur!=NULL)
    {
        if(cur->lc==NULL){
            cout<<cur->data<<" ";
            count++;
        cur=cur->rc;
        }
        else
        {
            pre=cur->lc;
            while(pre->rc!=NULL && pre->rc!=cur)
            pre=pre->rc;
            if(pre->rc==NULL){
            pre->rc=cur;
            cur=cur->lc;
            }
            else{
                count++;
                pre->rc=NULL;
                cout<<cur->data<<" ";
                cur=cur->rc;

            }
        }
    }
    return count;
}


// function which finds the median

int find_median(node*root)
{
    int i=0;
    int c=morris_traversal(root);
    node*cur=root;
    node*pre=cur;
    node*prev=cur;
    while(cur!=NULL)
    {
        if(cur->lc==NULL)
        {
            
            i++;
            if(c%2!=0 && i==(c+1)/2)
            return cur->data;
            else if(c%2==0 && i==(c/2)+1)
            return (prev->data+cur->data)/2;
            prev=cur;
            cur=cur->rc;
            
        }
        else
        {
            pre=cur->lc;
            while(pre->rc!=NULL && pre ->rc!=cur)
            pre=pre->rc;
            if(pre->rc==NULL)
            {
                pre->rc=cur;
                cur=cur->lc;
            }
            else{
                
                pre->rc=NULL;
                prev=pre;
                i++;
                if(c%2!=0 && i==(c+1)/2)
                  return cur->data;
                else if(c%2==0 && i==(c/2)+1)
                  return (prev->data+cur->data)/2;
                prev=cur;
                cur=cur->rc;
            }
        }

    }
}
