int sizeoflists(Node*head)
{
    int l=0;
    if(head==NULL)
    return 0;
    return sizeoflists(head->next)+1;
}
int intersectPoint(Node* head1, Node* head2)
{
    Node*p1=head1,*p2=head2;
    if(head1==NULL || head2==NULL)
    return -1;
    int l1=sizeoflists(head1);
    int l2=sizeoflists(head2);
    int d=0;
    if(l1>l2)
    {
        d=l1-l2;
        p1=head1;
        p2=head2;
    }
    else {
        d=l2-l1;
        p1=head2;
        p2=head1;
    }
    while(d--)
    {
        if(p1==NULL)
        return -1;
        p1=p1->next;
    }
    while(p1!=NULL && p2!=NULL)
    {
        if(p1==p2)
        return p1->data;
        p1=p1->next;
        p2=p2->next;
    }
    return -1;
    // Your Code Here
}
