void Left(Node* root,vector<int>& ans)
{
    if(!root)   
        return;
    if(root->left)
    {
        ans.push_back(root->data);
        Left(root->left,ans);
    }
    else if(root->right)
    {
        ans.push_back(root->data);
        Left(root->right,ans);
    }
}
void Leaf(Node* root,vector<int>& ans)
{
    if(!root)
        return;
    Leaf(root->left,ans);
    if(!root->left && !root->right)
        ans.push_back(root->data);
    Leaf(root->right,ans);
}
void Right(Node* root,vector<int>& ans)
{
    if(!root)
        return;
    if(root->right)
    {
        Right(root->right,ans);
        ans.push_back(root->data);
    }
    else if(root->left)
    {
        Right(root->left,ans);
        ans.push_back(root->data);
    }
    
}
vector <int> printBoundary(Node *root)
{
     vector<int> ans;
     ans.push_back(root->data);
     Left(root->left,ans);
     Leaf(root,ans);
     Right(root->right,ans);
     return ans;
}
