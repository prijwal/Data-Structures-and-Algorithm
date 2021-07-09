int dfs(int node,map<int,vector<int>>& al,map<int,bool>& vis ,vector<int> &w,vector<int> &nw)
{
    vis[node]=true;
    int wt=0;
    for(auto it:al[node])
    {
        if(!vis[it])
        {
            wt+=dfs(it,al,vis,w,nw);
        }
    }
    return nw[node]=w[node]+wt;

}
int Solution::deleteEdge(vector<int> &w, vector<vector<int>> &a) {
    map<int,vector<int>> al;
    map<int,bool> vis;
    for(int i=0;i<a.size();i++)
    {
        al[a[i][0]-1].push_back(a[i][1]-1);
        al[a[i][1]-1].push_back(a[i][0]-1);
    }
    int n=w.size();
    vector<int> sum(n,0);
    dfs(0,al,vis,w,sum);
    int ans = INT_MIN;
    int mod = 1e9+7;
    for(auto it:a)
    {
        long long temp1 = min(sum[it[0]-1], sum[it[1]-1]);
        long long temp2 = sum[0] - temp1;
        int temp3 = (temp1*temp2)%mod;
        ans = max(temp3, ans);
    }
    return ans;
}
