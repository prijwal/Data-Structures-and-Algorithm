node* getTail(struct node* head)
{
    while(head && head->next)
        head=head->next;
    return head;
}
node* partition(node* head,node* end,node*& newhead,node*&newend)
{
    node *pivot=end;
    node *prev=NULL,*curr=head,*tail=end;
    
    while(curr!=pivot)
    {
        if(curr->data<pivot->data)
        {
            if(!prev)
                newhead=curr;
            prev=curr;
            curr=curr->next;
        }
        else
        {
            if(prev)
                prev->next=curr->next;
            node* tmp=curr->next;
            curr->next=NULL;
            tail->next=curr;
            tail=curr;
            curr=tmp;
            
        }
    }
    if(!prev)
        newhead=pivot;
    newend=tail;
    return pivot;
}
node* quickSortRecur(node* head,node* end)
{
    if(!head || head==end )
        return head;
    node *newhead=NULL,*newend=NULL;
    
    node *pivot=partition(head,end,newhead,newend);
    if(newhead!=pivot)
    {
        node *tmp=newhead;
        while(tmp->next!=pivot)
            tmp=tmp->next;
        tmp->next=NULL;
        newhead=quickSortRecur(newhead,tmp);
        tmp=getTail(newhead);
        tmp->next=pivot;
    }
    pivot->next=quickSortRecur(pivot->next,newend);
    return newhead;
}
void quickSort(struct node **headRef) {
    *headRef=quickSortRecur(*headRef,getTail(*headRef));
    return;
}
