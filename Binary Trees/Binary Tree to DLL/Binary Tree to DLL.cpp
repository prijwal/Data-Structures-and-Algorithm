void traverse(Node* root,Node*& head,Node*& prev)
{
    if(!root)
        return ;
    // static Node *prev=NULL;
    traverse(root->left,head,prev);
    if(!prev)
        head=root;
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    traverse(root->right,head,prev);
}
Node* bToDLL(Node *root)
{
    Node *prev=NULL,*head=NULL;
    traverse(root,head,prev);
    return head;
    
}
