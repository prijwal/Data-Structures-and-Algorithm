const int N=1e9+7;
vector<vector<long long>> multiply(vector<vector<long long>> &a,vector<vector<long long>> &b)
{
    int n=a.size();
    vector<vector<long long>> ans(n,vector<long long>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                ans[i][j]+=(a[i][k]%N*b[k][j]%N)%N;
            }
        }
    }
    return ans;
}
vector<vector<long long>> exponential(vector<vector<long long>>& matrix,int n)
{
    if(n==0)
    {
        // return identation matrix
        int sz=matrix.size();
        vector<vector<long long>> ans(sz,vector<long long>(sz,0));
        for(int i=0;i<sz;i++)
            ans[i][i]=1;
        return ans;
    }
    if(n==1)
        return matrix;

    vector<vector<long long>> half=exponential(matrix,n/2);
    vector<vector<long long>> ans=multiply(half,half);
    if(n&1)
        ans=multiply(ans,matrix);
    return ans;
}
int Solution::solve(int n) {
    if(n==1 or n==2 )
        return 1;
    vector<vector<long long>> matrix{{1,1},{1,0}};
    vector<vector<long long>> ans=exponential(matrix,n-1);
    return (ans[0][0]%N);
}
