Node * removeDuplicates( Node *head) 
    {
        map<int,int>m;
        
        if(head==NULL ||head->next==NULL)
        return head;
        Node*temp=head,*prev=NULL;
        while(temp!=NULL)
        {
            if(m[temp->data]==1)
            {
                Node*todel=temp;
                prev->next=temp->next;
                delete todel;
                temp=prev->next;
            }
            else{
                prev=temp;
                m[temp->data]=1;
                temp=temp->next;
            }
            
        }
        return head;
     // your code goes here
    }
