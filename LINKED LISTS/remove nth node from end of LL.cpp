ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int c=1,i=1;
        if(head==NULL)
            return NULL;
        
        while(temp->next!=NULL)
        {
            c++;
            temp=temp->next;
        }
        temp=head;
        if(c-n==0)
        {
            head=head->next;
            delete temp;
            return head;
        }
        while(i<c-n&&temp!=NULL)
        {
            temp=temp->next;
            i++;
        }
        ListNode*todel=temp->next;
        temp->next=temp->next->next;
        delete todel;
        return head;
        
    }
