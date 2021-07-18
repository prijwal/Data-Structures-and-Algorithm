Node* merge(Node *a,Node *b)
{
    if(!a || !b)
        return (!a?b:a);
    Node *result;
    if(a->data<b->data)
    {
        result=a;
        result->next=merge(a->next,b);
    }
    else
    {
        result=b;
        result->next=merge(a,b->next);
    }
    return result;
}
Node* mergelists(Node *arr[], int N,int cnt=0)
{
    if(cnt==N)
        return NULL;
    return merge(arr[cnt],mergelists(arr,N,cnt+1));
}
Node * mergeKLists(Node *arr[], int N)
{
    sort(arr,arr+N,[](Node* a,Node* b){return a->data<b->data;});
    return mergelists(arr,N);
}
