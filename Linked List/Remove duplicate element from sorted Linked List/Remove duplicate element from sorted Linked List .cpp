Node *removeDuplicates(Node *head)
{
    Node *curr=head,*nex=NULL;
    while(curr!=NULL)
    {
        nex=curr->next;
        while(nex!=NULL && curr->data==nex->data )
            nex=nex->next;
        curr->next=nex;
        curr=nex;
    }
    return head;
}
