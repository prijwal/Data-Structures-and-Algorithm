    bool valid(int i,int j,int n,int m,vector<vector<bool>>& vis,vector<string> &a)
    {
        if(i>=0 and i<n and j>=0 and j<m and !vis[i][j] and a[i][j]=='X')
            return true;

        return false;
    }
    int dx[]={-1,0,1,0};
    int dy[]={0,1,0,-1};
    void search(int i,int j,int n,int m,vector<vector<bool>>& vis,vector<string> &a)
    {
        vis[i][j]=true;
        for(int it=0;it<=3;it++)
        {
            if(valid(i+dx[it],j+dy[it],n,m,vis,a))
                search(i+dx[it],j+dy[it],n,m,vis,a);
        }
    }
    int Solution::black(vector<string> &a) {
        int n=a.size();
        int m=a[0].length();
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]=='X' and !vis[i][j])
                {
                    ans++;
                    search(i,j,n,m,vis,a);
                }
            }
        }
        return ans;
    }
