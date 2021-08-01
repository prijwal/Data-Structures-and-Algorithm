
string solve(Node* root,vector<Node*>& ans,unordered_map<string,int>& mp)
{
    if(!root)   
        return "$";
    string s="";
    s+=solve(root->left,ans,mp);
    s+=to_string(root->data);
    s+=solve(root->right,ans,mp);
    if(mp[s]==1)
        ans.push_back(root);
    mp[s]++;
    return s;
}
vector<Node*> printAllDups(Node* root)
{
    unordered_map<string,int> mp;
    vector<Node*> ans;
    solve(root,ans,mp);
    return ans;
}
