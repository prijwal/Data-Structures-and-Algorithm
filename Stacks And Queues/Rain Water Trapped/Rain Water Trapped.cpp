int Solution::trap(const vector<int> &a) {
    int n=a.size();
    vector<int> max_l(n,a[0]);
    vector<int> max_r(n,a[n-1]);
    for(int i=1;i<n;i++)
    {
        max_l[i]=max(a[i],max_l[i-1]);
    }
    for(int i=n-2;i>=0;i--)
    {
        max_r[i]=max(a[i],max_r[i+1]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(min(max_r[i],max_l[i])-a[i]);
    }
    return ans;
}
