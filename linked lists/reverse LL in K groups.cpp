struct node *reverse (struct node *head, int k)
    { 
        int i=0;
        struct node*prev=NULL,*nextptr,*cur=head;
        if(head==NULL || head->next==NULL)
        return head;
        while(cur!=NULL && i<k) 
        {
            nextptr=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nextptr;
            i++;
        }
        if(nextptr!=NULL)
        head->next=reverse(nextptr,k);
        return prev;
        // Complete this method
    }
