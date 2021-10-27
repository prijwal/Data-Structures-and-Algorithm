vector<int> leftView(Node *root)
{
    traverse(root);
    queue<Node*> q;
    if(root!=NULL)
        q.push(root);
    vector<int> ans;
    while(!q.empty())  // Level order traversing
    {
        int n=q.size();
        for(int i=0;i<n;i++)  // node in one level
        {
            Node *curr=q.front();
            q.pop();
            if(i==0)
                ans.push_back(curr->data);
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
    return ans;
}
