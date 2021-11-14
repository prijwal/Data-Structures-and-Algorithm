int intersectPoint(Node* first, Node* second)
{
    Node *head1=first,*head2=second;
    int n=0,m=0,d=0;
    while(first)
    {
        first=first->next;
        n++;
    }
    while(second)
    {
        second=second->next;
        m++;
    }
    first=head1;
    second=head2;
    d=abs(n-m);
    if(n>m)
    {
        while(d--)
            first=first->next;
    }
    else
    {
        while(d--)
            second=second->next;
    }
    while(first && second)
    {
        if(first==second)
            return first->data;
        first=first->next;
        second=second->next;
    }
    return -1;
}
