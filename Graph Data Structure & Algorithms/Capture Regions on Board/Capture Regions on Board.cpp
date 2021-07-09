bool check(int i,int j,int n,int m,vector<vector<char> > &a)
{
    if(i>0 and i<n and j>0 and j<m and a[i][j]=='O')
        return true;
    return false;
}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
void dfs(int i,int j,int n,int m,vector<vector<char> > &a)
{
    a[i][j]='1';
    for(int it=0;it<4;it++)
    {
        if(check(i+dx[it],j+dy[it],n,m,a))
        {
            dfs(i+dx[it],j+dy[it],n,m,a);
        }
    }
}
void Solution::solve(vector<vector<char> > &a) {
    int n=a.size();
    int m=a[0].size();
    for(int i=0;i<m;i++)
    {
        if(a[0][i]=='O')
            dfs(0,i,n,m,a);

        if(a[n-1][m-1-i]=='O')
            dfs(n-1,m-1-i,n,m,a);

    }
    for(int i=0;i<n;i++)
    {
        if(a[i][0]=='O')
            dfs(i,0,n,m,a);

        if(a[i][m-1]=='O')
            dfs(i,m-1,n,m,a);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='1')
                a[i][j]='O';
            else if(a[i][j]=='O')
                a[i][j]='X';
        }
    }
}
