Node* reverse(Node *head)
{
    Node *prev=NULL,*nxt=NULL,*curr=head;
    while(curr)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    first=reverse(first);
    second =reverse(second);
    int carry=0,sm;
    Node *prev=NULL,*head1=first;
    while(first && second )
    {
        sm=first->data+second->data+carry;
        prev=first;
        carry=sm/10;
        first->data=sm%10;
        first=first->next;
        second=second->next;
    }
    if(first || second)
    {
        if(second)
            prev->next=second;
        first=prev->next;
        while(first)
        {
            sm=first->data+carry;
            carry=sm/10;
            first->data=sm%10;
            prev=first;
            first=first->next;
        }
    }
    if(carry)
    {
        prev->next= new Node(carry);
    }
    first=reverse(head1);
    return first;
    
    
}
