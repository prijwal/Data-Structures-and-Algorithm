int solve(int n,int x,int y,int z,vector<int> &dp)
    {
        if(n==0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        int i=INT_MIN,j=INT_MIN,k=INT_MIN;  // Do not difine -1 , max({i,j,k})+1 will give 0 
        if(n>=x)
            i=solve(n-x,x,y,z,dp);
        if(n>=y)
            j=solve(n-y,x,y,z,dp);
        if(n>=z)
            k=solve(n-z,x,y,z,dp);
        return dp[n]=1+max({i,j,k});
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> dp(n+1,-1);
        dp[0]=0;
        solve(n,x,y,z,dp);
        return dp[n]>=0?dp[n]:0;
    }
