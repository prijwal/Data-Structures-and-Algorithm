int lcs(int n, int m, string s1, string s2){
	int dp[n+1][m+1],i,j;
	memset(dp,0,sizeof(dp));
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][m];
}
