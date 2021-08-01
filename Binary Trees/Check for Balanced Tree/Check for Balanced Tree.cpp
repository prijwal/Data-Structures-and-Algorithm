bool ans=true;
int height(Node *root,int h)
{
    if(root==NULL)
        return h-1;
    int left=height(root->left,h+1);
    int right=height(root->right,h+1);
    if(abs(left-right)>1)
        ans=false;
    return max(left,right);
}
bool isBalanced(Node *root)
{
    ans=true;
    height(root,0);
    return ans;
}
