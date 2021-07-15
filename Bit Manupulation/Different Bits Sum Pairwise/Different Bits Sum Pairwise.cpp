int Solution::cntBits(vector<int> &a) {
    int n=a.size();
    int N=1e9+7;
    long long ans=0;
    for(int i=0;i<31;i++)
    {
        long long cnt=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]&(1<<i))
                cnt++;
        }
        ans=(ans+(cnt%N)*(n-cnt)%N)%N;
    }
    ans=(ans*2)%N;
    return ans;
}
