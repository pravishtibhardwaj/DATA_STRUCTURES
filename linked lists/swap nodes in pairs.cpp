ListNode* swapPairs(ListNode* head) {
        ListNode*cur=head;
        ListNode*prev=NULL;    
        ListNode*nextptr;
        int count=0;
        if(head==NULL || head->next==NULL)
            return head;
        while(cur!=NULL && count<2)
        {
            nextptr=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nextptr;
            count++;
        }
        head->next=swapPairs(nextptr);
        return prev;
    }
