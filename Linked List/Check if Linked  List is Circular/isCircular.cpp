bool isCircular(Node *head)
{
   Node *curr=head->next,*val=head;
   while(curr && curr!=val)
        curr=curr->next;
    return curr==val;
}
