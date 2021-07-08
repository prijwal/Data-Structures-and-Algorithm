bool check(int src,int tgt,unordered_map<int,vector<int>> &al,unordered_map<int,bool> &vis)
{
    vis[src]=true;
    bool ans=false;
    for(auto it:al[src])
    {
        if(it==tgt)
            return ans=true;
        if(!vis[it])
           ans=check(it,tgt,al,vis);
        if(ans)
            return ans;
    }
    return ans;
}
int Solution::solve(vector<int> &a, vector<int> &b, vector<vector<int> > &c) {
    unordered_map<int,int> mp;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]]=i;
    }
    unordered_map<int,vector<int>> al;
    for(int i=0;i<c.size();i++)
    {
        al[c[i][0]-1].push_back(c[i][1]-1);
        al[c[i][1]-1].push_back(c[i][0]-1);
    }
    for(int i=0;i<a.size();i++)
    {
        unordered_map<int,bool> vis;
        if(a[i]!=b[i])
        {
            if(!check(i,mp[b[i]],al,vis))
                return 0;
            else 
                swap(a[i],a[mp[b[i]]]);
        }
    }
    return 1;
}
