
class Solution
{
    public:
    void removeLoop(Node* head)
    {
        Node *slow=head,*fast=head;
        while(fast->next and fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        if(slow==head)
        {
            while(fast->next!=slow)
                fast=fast->next;
            fast->next=NULL;
        }
        else if(slow==fast)
        {
            slow=head;
            while(slow->next!=fast->next)
            {
                slow=slow->next;
                fast=fast->next;
            }
            fast->next=NULL;
        }
    }
};
