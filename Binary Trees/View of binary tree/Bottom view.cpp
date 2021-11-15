map<Node*,int> mp;
void  traverse(Node *root,int hd=0) // having distance of each node
{
    if(root==NULL)
        return;
    mp[root]=hd;
    traverse(root->left,hd-1);
    traverse(root->right,hd+1);
}
vector <int> bottomView(Node *root)
{
    traverse(root);
    queue<Node*> q;
    q.push(root);
    map<int,int> hd;
    vector<int> ans;
    while(!q.empty())  // Level order traversing
    {
        int n=q.size();
        for(int i=0;i<n;i++)  // node in one level
        {
            Node *curr=q.front();
            q.pop();
            hd[mp[curr]]=curr->data;
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
    for(auto it:hd)
        ans.push_back(it.second);
    return ans;
}
