int findLongestChain(vector<vector<int>>& a) {
    int n=a.size();
    sort(a.begin(),a.end());
    vector<int> dp(n,1);
    for(int i=1;i<n;i++)
    {
      for(int j=0;j<i;j++)
      {
        if(a[i][0]>a[j][1])
          dp[i]=max(dp[i],1+dp[j]);
      }
    }
    return *max_element(dp.begin(),dp.end());
}
