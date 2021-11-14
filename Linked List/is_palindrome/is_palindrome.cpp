bool isPalindrome(Node *head)
{
    Node *slow=head,*fast=head,*prev=NULL,*nxt=NULL;
    bool ans=true;
    if(!head)
        return !ans;
    while(fast->next and fast->next->next)
    {
        fast=fast->next->next;
        nxt=slow->next;     // reversing the first half link list
        slow->next=prev;
        prev=slow;
        slow=nxt;
    }
    Node *left,*right;
    if(fast->next==NULL)
    {
        right=slow->next;
        left=prev;
    }
    else
    {
        right=slow->next;
        slow->next=prev;
        left=slow;
    }
    
    while(left and right)
    {
        if(left->data!=right->data)
            return 0;
        left=left->next;
        right=right->next;
    }
    return 1;
}
