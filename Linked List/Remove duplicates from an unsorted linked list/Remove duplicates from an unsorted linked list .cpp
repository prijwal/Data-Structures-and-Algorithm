Node * removeDuplicates( Node *head) 
{
    map<int,bool> mp;
    Node *curr=head,*prev=NULL;
    while(curr!=NULL)
    {
        if(!mp[curr->data])
        {
            mp[curr->data]=true;
            prev=curr;
        }
        else
        {
            prev->next=curr->next;
            
        }
            curr=curr->next;
    }
    return head;
}
