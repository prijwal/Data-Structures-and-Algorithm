int Solution::nTriang(vector<int> &a) {
    sort(a.begin(),a.end());
    int n=a.size();
    int ans=0,N=1e9+7;
    for(int i=n-1;i>0;i--)
    {
        int l=0,r=i-1;
        while(r>l)
        {
            if(a[r]+a[l]>a[i])
            {
                ans+=(r-l);
                ans%=N;
                r--;
            }
            else
                l++;

        }
    }
    return ans;
}
