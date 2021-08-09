int equalPartition(int n, int a[])
    {
        int sm=0;
        for(int i=0;i<n;i++)
            sm+=a[i];
        if(sm&1)
            return 0;
        int m=sm/2;
        bool dp[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(j==0)
                    dp[i][j]=1;
                else if(i==0)
                    dp[i][j]=0;
                else if(j-a[i-1]<0)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=(dp[i-1][j]||dp[i-1][j-a[i-1]]);
            }
        }
        return 1?dp[n][m]:0;
    }
