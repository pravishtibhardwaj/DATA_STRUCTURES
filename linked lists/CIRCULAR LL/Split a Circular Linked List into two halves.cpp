/*Input:
Circular LinkedList: 1->5->7
Output:
1 5
7 
*/
//code by pravishtibhardwaj
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    if(head==NULL || head->next==NULL)
    return;
    
    *head1_ref=head;
    Node*slow=head,*fast=head->next;
    while(fast!=head && fast->next!=head)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    
    *head2_ref=slow->next;
    slow->next=*head1_ref;
    Node*temp2=*head2_ref;
    while(temp2->next!=head)
    temp2=temp2->next;
    temp2->next=*head2_ref;
  
    // your code goes here
}
