Node* reverseDLL(Node * head)
{
    Node *curr=head,*tmp=NULL;
    while(curr)
    {
        tmp=curr->prev;
        curr->prev=curr->next;
        curr->next=tmp;
        curr=curr->prev;
    }
    if(tmp)    
        head=tmp->prev;
    return head;
}
