int solve(vector<vector<long long>>& dp,int arr[], int n,int i,int j)
{
    if(i>j)
        return 0;
        
    if(dp[i][j]!=-1)
        return dp[i][j];
        
    long long l=arr[i]+min(solve(dp,arr,n,i+2,j),solve(dp,arr,n,i+1,j-1));
    long long r=arr[j]+min(solve(dp,arr,n,i+1,j-1),solve(dp,arr,n,i,j-2));
    return dp[i][j]=max(l,r);
}
long long maximumAmount(int arr[], int n){
    vector<vector<long long>> dp(n,vector<long long>(n,-1));
    
    int ans=solve(dp,arr,n,0,n-1);
    // long long ans=0;
    return ans;
}
