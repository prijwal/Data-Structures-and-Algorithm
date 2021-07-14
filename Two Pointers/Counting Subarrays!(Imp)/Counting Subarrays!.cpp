int Solution::solve(vector<int> &a, int k) {
    int n=a.size();
    int r=0,l=0,ans=0;
    int sm=0;
    for(int i=0;i<n;i++)
    {
        sm+=a[i];
        while(sm>=k)
            sm-=a[l++];
        ans+=(i-l+1);
    }
    return ans;
}
