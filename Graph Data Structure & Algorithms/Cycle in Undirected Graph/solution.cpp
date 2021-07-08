bool check(int node,map<int,vector<int>>& al,map<int,bool>& vis,int parent)
{
    vis[node]=true;
    bool cycle=false;
    for(auto it:al[node])
    {
        if(!vis[it])
            cycle=check(it,al,vis,node);
        else if(it!=parent)
            return cycle=true;
        if(cycle)
            return true ;
    }
    return cycle;
}
int Solution::solve(int n, vector<vector<int> > &a) {
    int m=a.size();
    map<int,vector<int>> al;
    for(int i=0;i<m;i++)
    {
        al[a[i][0]].push_back(a[i][1]);
        al[a[i][1]].push_back(a[i][0]);
    }
    map<int,bool> vis;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            if(check(i,al,vis,-1))
                return 1;
        }
    }
    return 0;
}
