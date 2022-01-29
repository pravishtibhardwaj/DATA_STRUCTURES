// function to return first node of the cycle 
struct Node*firstnodeofcycle(struct Node*head)
{
    int flag=0;
    struct Node*fast=head,*slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
          flag=1;
        break;
        }
    }
    if(flag==0)
    return NULL;
    if(slow==head)
    return slow;
    else if(fast==slow)
    {
        fast=head;
        while(slow->next!=fast->next)
        {
            fast=fast->next;
            slow=slow->next;
            
        }
        return slow->next;
    }
}
int countNodesinLoop(struct Node *head)
{
    struct Node*mynode=firstnodeofcycle(head);
    if(head==NULL || head->next==NULL || mynode==NULL)
    return 0;
    int c=0;
    
    Node*temp=mynode;
    do{
        temp=temp->next;
        c++;
    }while(temp!=mynode);
    return c;
    // Code here
}
