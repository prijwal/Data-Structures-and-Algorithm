int lengthOfLIS(vector<int>& a) {
  
  map<int,int> mp;
  int n=a.size();
  vector<int> b;
  for(int i=0;i<n;i++)
     mp[a[i]]++;
  
  for(auto it:mp){
      int val=it.first;
      b.push_back(val);
  }
  
  int m=b.size();
  int dp[n+1][m+1];
  memset(dp,0,sizeof(dp));
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=m;j++)
      {
          if(a[i-1]==b[j-1])
              dp[i][j]=1+dp[i-1][j-1];
          else
              dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
      }
  }
  return dp[n][m];
}
