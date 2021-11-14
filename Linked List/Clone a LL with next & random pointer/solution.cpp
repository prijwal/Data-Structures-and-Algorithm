Node *copyList(Node *head) {
    Node* curr=head;
    while(curr)
    {
        Node *temp=curr->next;
        curr->next=new Node(curr->data);
        curr->next->next=temp;
        curr=temp;
    }
    curr=head;
    while(curr)
    {
        if(curr->arb)
        {
            curr->next->arb=curr->arb->next;
        }
        curr=curr->next->next;
    }
    Node *original=head,*copy=head->next;
    curr=copy;
    while(original && copy)
    {
        original->next=original->next->next;
        original=original->next;
        copy->next=(copy->next?copy->next->next:copy->next);
        copy=copy->next;
    }
    return curr;
}
