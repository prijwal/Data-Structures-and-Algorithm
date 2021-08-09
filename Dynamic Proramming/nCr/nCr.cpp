int nCr(int n, int r){
        int i,j;
        int dp[n+1][r+1];
        memset(dp,0,sizeof(dp));
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=min(i,r);j++)
            {
                if(j==0 || j==i)
                    dp[i][j]=1;
                else
                    dp[i][j]=(dp[i-1][j-1]%N+dp[i-1][j]%N)%N;
            }
        }
        return dp[n][r];
    }
