int solve(int i,int j,int n,int m,vector<vector<int>>& a)
    {
        if(i>=n || i<0 || j>=m || j<0 || a[i][j]==0)
            return 0;
        
        int val=a[i][j];
        a[i][j]=0;
        int sm=val;
        sm+=max({solve(i-1,j,n,m,a),solve(i+1,j,n,m,a),solve(i,j-1,n,m,a),solve(i,j+1,n,m,a)});
        a[i][j]=val;
        
        return sm;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=-1000000;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                    ans=max(ans,solve(i,j,n,m,grid));
            }
        }
        return ans;
        
    }
