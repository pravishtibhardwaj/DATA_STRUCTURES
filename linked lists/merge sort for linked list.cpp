Node*findmid(Node *head)
   {
        Node*fast=head->next,*slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
       
   }
     Node* merge(Node*l1,Node*l2)
    {
        Node*ans=NULL; 
       if(!l1)
       return l2;
       if(!l2)
       return l1;
       if(l1->data<=l2->data){
       ans=l1;
       ans->next=merge(l1->next,l2);
       }
       else
       {
           ans=l2;
           ans->next=merge(l1,l2->next);
       }
       return ans;
        
    }
    
    Node* mergeSort(Node* head) {
        // your code here
        
        if(head==NULL || head->next==NULL)
        return head;
        Node*mid=findmid(head);
        Node*mid_next=mid->next;
        mid->next=NULL;
        Node*l1=mergeSort(head);
        Node*l2=mergeSort(mid_next);
    
    
        return merge(l1,l2);
        
    }
