
/*Input:
L1 = 1->2->3->4->6
L2 = 2->4->6->8
Output: 2 4 6
Explanation: For the given first two
linked list, 2, 4 and 6 are the elements
in the intersection.
*/

Node* findIntersection(Node* head1, Node* head2)
{
    Node*temp1=head1,*temp2=head2;
    Node*dummy=new Node(-1);
    Node*temp3=dummy;
    if(head1==NULL || head2==NULL)
    return NULL;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data==temp2->data){
        temp3->next=new Node(temp1->data);
        temp3=temp3->next;
        temp1=temp1->next;
        temp2=temp2->next;
        }
        else if(temp1->data>temp2->data)
        temp2=temp2->next;
        else temp1=temp1->next;
        
    }
    return dummy->next;
    // Your Code Here
}
