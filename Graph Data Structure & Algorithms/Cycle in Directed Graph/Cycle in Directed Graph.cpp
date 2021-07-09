bool check(int node,map<int,vector<int>>& al,map<int,bool>& vis,map<int,bool>& curr)
{
    vis[node]=true;
    curr[node]=true;
    bool cycle =false;
    for(auto it:al[node])
    {
        if(!vis[it])
            cycle=check(it,al,vis,curr);
        else if(curr[it])
            return true;
        if(cycle)
            return true;
    }
    curr[node]=false;
    return cycle;
}
int Solution::solve(int n, vector<vector<int> > &a) {
    map<int,vector<int>> al;
    int m=a.size();
    for(int i=0;i<m;i++)
    {
        al[a[i][0]].push_back(a[i][1]);
    }
    map<int,bool> vis;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            map<int,bool> curr;
            if(check(i,al,vis,curr))
                return 1;
        }
    }
    return 0;
}
