Node*addOneR(Node*head,int &carry)
    {
        if(head==NULL)
        return NULL;
        int sum=0;
        addOneR(head->next,carry);
        sum=head->data+carry;
        if(sum>9)
        {
            head->data=0;
            carry=1;
        }
        else{
            head->data=sum;
            carry=0;
        }
        return head;
        
    }
    Node* addOne(Node *head) 
    {
        if(head==NULL)
        return NULL;
        int carry =1;
        addOneR(head,carry);
        if(carry==1)
        {
            Node*newnode=new Node(carry);
            newnode->next=head;
            return newnode;
        }
        else return head;
        
        
        // Your Code here
        // return head of list after adding one
    }
