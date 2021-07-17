class Solution
{
    public:
    
    struct node *reverse (struct node *head, int k)
    { 
        node *curr=head,*prev=NULL,*next=NULL,*t_head=NULL;
        int cnt=0;
        while(curr!=NULL && cnt<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        
        if(next!=NULL)
            head->next=reverse(next,k);
        
        return prev;
    }

};
