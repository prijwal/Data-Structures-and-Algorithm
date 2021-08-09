int n=s1.length();
	int dp[n+1][n+1],i,j;
	string s2=s1;
	memset(dp,0,sizeof(dp));
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=n;j++)
      {
          if(s1[i-1]==s2[j-1] && i!=j)
              dp[i][j]=dp[i-1][j-1]+1;
          else
              dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
      }
  }
  return dp[n][n];
}
