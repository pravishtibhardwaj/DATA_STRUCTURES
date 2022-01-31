 
/*Input:
LinkedList = 12->15->10->11->5->6->2->3
Output: 15 11 6 3
Explanation: Since, 12, 10, 5 and 2 are
the elements which have greater elements
on the following nodes. So, after deleting
them, the linked list would like be 15,
11, 6, 3.
Example 2:

Input:
LinkedList = 10->20->30->40->50->60
Output: 60
*/

//optimised approach
Node *compute(Node *head)
    {
        if(head==NULL|| head->next==NULL)
        return head;
        Node*temp=compute(head->next);
        if(head->data<temp->data)
        {
            return temp;
        }
        head->next=temp;
        return head;
        
        // your code goes here
    }



/*  not an optimised approach 

Node *compute(Node *head)
{
        // Node*temp=head,*prev=NULL;
        // while(temp->next!=NULL)
        // {
            
        //     if(temp->data<temp->next->data)
        //     {
        //         Node*todel=temp;
        //         if(temp==head)
        //         {
        //             temp=temp->next;
        //             head=temp;
        //             delete todel;
        //         }
        //         else {
        //             prev->next=temp->next;
        //             delete todel;
        //             temp=prev;
        //         }
        //     }
        //     else {
        //         prev=temp;
        //         temp=temp->next;
        //     }
        // }
        // return head;
        
        */
