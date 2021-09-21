Node* reverseList(Node *head)
{
    Node *curr=head,*prev=NULL,*next=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
