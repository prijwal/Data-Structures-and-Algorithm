Node* divide(int n, Node *head){
        Node *tail=NULL,*prev=NULL,*curr=NULL;
        curr=head;
        while(curr->next!=NULL)
            curr=curr->next;
            
        tail=curr;
        if(tail==head)
            return head;
        curr=head;
        while(n--)
        {
            if((curr->data)&1)
            {
                if(prev==NULL)
                {
                    head=head->next;
                    tail->next=curr;
                    tail=curr;
                    curr->next=NULL;
                    curr=head;
                }
                else
                {
                    tail->next=curr;
                    tail=curr;
                    prev->next=curr->next;
                    curr->next=NULL;
                    curr=prev->next;
                }
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
