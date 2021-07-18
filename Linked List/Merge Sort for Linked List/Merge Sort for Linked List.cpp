Node* middle(Node *head)
{
    Node *fast=head;
    Node *slow=head;
    while(fast->next && fast->next->next)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow; 
}
Node* merge(Node *left,Node *right)
{
    Node *result=NULL;
    if(!left)
        return right;
    if(!right)
        return left;
    
    if(left->data<=right->data)
    {
        result=left;
        result->next=merge(left->next,right);
    }
    else
    {
        result=right;
        result->next=merge(left,right->next);
    }
    return result;
    
}
Node* mergeSort(Node* head) {
    if(!head || !head->next)
        return head;
        
    Node *mid=middle(head);
    Node *nxt=mid->next;
    mid->next=NULL;
    Node *left=mergeSort(head);
    Node *right=mergeSort(nxt);
    
    Node *ans=merge(left,right);
    return ans;
}
