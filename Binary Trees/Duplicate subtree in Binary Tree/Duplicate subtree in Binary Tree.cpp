nordered_map<string,bool> mp;
string traverse(Node* root,bool& ans)
{
    if(!root)   
        return "$";
    string s="";
    if(!root->left && !root->right) 
    {
        s=to_string(root->data);
        return s;
    }
    s+=to_string(root->data);
    s+=traverse(root->left,ans);
    s+=traverse(root->right,ans);
    if(mp[s])
        ans=true;
    else
        mp[s]=true;
    return s;
}
bool dupSub(Node *root)
{
    mp.clear();
    bool ans=false;
    string s=traverse(root,ans);
    return ans ;
}
