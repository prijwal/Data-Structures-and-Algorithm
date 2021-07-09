int dfs(int node,int &mx,map<int,vector<int>> &al,map<int,bool>& vis)
{
    int h=0;
    vis[node]=true;
    vector<int> hgt;
    for(auto it:al[node])
    {
        if(vis[it])
            continue;
        h=dfs(it,mx,al,vis);
        hgt.push_back(h);
    }
    
    int n=hgt.size();
    if(n>1)
    {
        sort(hgt.begin(),hgt.end());
        mx=max(mx,hgt[n-1]+hgt[n-2]+1);
        return max(hgt[n-1],hgt[n-2])+1;
    }
    else if(n==1)
    {
        mx=max(mx,hgt[n-1]+1);
        return hgt[n-1]+1;
    }
    else 
    {
        mx=max(mx,1);
        return 1;
    }
}
int Solution::solve(vector<int> &a) {
    int n=a.size();
    map<int,vector<int>> al;
    map<int,bool> vis;
    int root;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            root=i;
            continue;
        }
        al[a[i]].push_back(i);
        al[i].push_back(a[i]);   
    }
    int mx=-1;
    dfs(root,mx,al,vis);
    return mx-1;
}
