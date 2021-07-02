int dy[8]={1,1,1,0,-1,-1,-1,0};
int dx[8]={-1,0,1,1,1,0,-1,-1};
bool isvalid(int i,int j,int n,int m,vector<vector<int> > &a,vector<vector<bool>> &vis)
{
    if(i>=0 and i<n and j>=0 and j<m and a[i][j]!=0 and !vis[i][j])
        return true;
    return false;
}
int dfs(int i,int j,int n,int m,vector<vector<int> > &a,vector<vector<bool>> &vis)
{
    vis[i][j]=true;
    int cnt=1;
    for(int it=0;it<8;it++)
    {
        if(isvalid(i+dx[it],j+dy[it],n,m,a,vis))
        {
            cnt+=dfs(i+dx[it],j+dy[it],n,m,a,vis);
        }
    }
    return cnt;
}
int Solution::solve(vector<vector<int> > &a) {
    int n=a.size();
    int m=a[0].size();
    int ans=0;
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(isvalid(i,j,n,m,a,vis))
            {
                int temp=dfs(i,j,n,m,a,vis);
                ans=max(ans,temp);
            }
        }
    }
    return ans;
}

