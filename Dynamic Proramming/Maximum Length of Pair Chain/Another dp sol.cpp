int solve(vector<vector<int>>& a,int i,int n,vector<int>& dp,int last)
{   
  if(i>=n)
    return 0;
  if(dp[last])
    return dp[last];
  
  int yes=0,no=0;  // include node or not 
  if(a[i][0]>last)
    yes=1+solve(a,i+1,n,dp,a[i][1]);
  no=solve(a,i+1,n,dp,last);
  return dp[last]=max(yes,no);
}
int findLongestChain(vector<vector<int>>& a,int i=0) {
  int n=a.size();
  sort(a.begin(),a.end());
  for(int i=0;i<n;i++)
  {
      a[i][0]+=1001;  // because range is -1000 to 999
      a[i][1]+=1001;
  }
  vector<int> dp(2002,0);
  solve(a,0,n,dp,0);   
  return dp[0];
}
// Space complexity for this solution is A[i], that's why it is bad solution
