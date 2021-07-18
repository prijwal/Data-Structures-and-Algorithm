Node* segregate(Node *head) {
    
    Node *curr=head;
    int a[3]={0};
    while(curr)
    {
        a[curr->data]++;
        curr=curr->next;
    }
    curr=head;
    while(curr)
    {
        if(a[0])
        {
            curr->data=0;
            a[0]--;
        }
        else if(a[1])
        {
            curr->data=1;
            a[1]--;
        }
        else
            curr->data=2;
        curr=curr->next;
    }
    return head;
}
