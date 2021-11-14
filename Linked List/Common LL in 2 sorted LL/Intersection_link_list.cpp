Node* findIntersection(Node *first, Node *second)
{
    Node *head1=first,*head2=second;
    Node *head=NULL,*ans;
    while(first && second )
    {
        if(first->data==second->data)
        {
            Node *temp=new Node(first->data);
            if(!head)
            {
                head=temp;
                ans=temp;
            }
            else
            {
                ans->next=temp;
                ans=ans->next;
            }
            first=first->next;
            second=second->next;
        }
        else if(first->data>second->data)
            second=second->next;
        else
            first=first->next;
    }
    return head;
}
