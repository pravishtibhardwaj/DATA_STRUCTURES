//rotate DLL by n nodes
Node* countnodes(Node*start,int &c)
    {
        if(start==NULL)
        return NULL;
        Node*temp=start;
        while(temp->next!=NULL){
        temp=temp->next;
        c++;
        }
        
        return temp;
    }
    Node *update(Node *start,int p)
    {
        int c=1;
        Node*end=countnodes(start,c);
        if(start==NULL || p==c)
        return start;
        int i=1;
        Node*temp=start;
        while(i<p && temp!=NULL)
        {
            temp=temp->next;
            i++;
        }
         end->next=start;
        start->prev=end;
        start=temp->next;
        temp->next->prev=NULL;
        temp->next=NULL;
        return start;
       
        
        
        
        //Add your code here
    }
