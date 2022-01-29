bool isCircular(Node *head)
{
    if(head==NULL || head->next==NULL)
    return false;
     Node*temp=head;
    do{
        
        temp=temp->next;
        if(temp->next==NULL)
        return false;
        
    }while(temp->next!=head);
    return true;
   // Your code here
}
