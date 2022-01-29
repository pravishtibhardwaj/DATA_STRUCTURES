void removeLoop(Node* head)
    {
         Node*slow=head,*fast=head;
         if(head==NULL || head->next==NULL)
         return;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        
        if(fast==head)
        {
            while(fast->next!=slow)
            fast=fast->next;
            fast->next=NULL;
        }
        else if(slow==fast){
        fast=head;
         while(fast->next!=slow->next)
         {
             fast=fast->next;
             slow=slow->next;
         }
         slow->next=NULL;
        }
        // code here
        // just remove the loop without losing any nodes
    }
