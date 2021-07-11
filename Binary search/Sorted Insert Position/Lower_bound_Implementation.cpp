int Solution::searchInsert(vector<int> &a, int k) {
    int n=a.size();
    int l=0,h=n-1;
    int ans=0;
    while(h>=l)
    {
        int m=l+(h-l)/2;
        if(a[m]==k)
            return m;
        if(a[m]>k)
            h=m-1;
        else 
        {
            l=m+1;
            ans=m+1;
        }
    }
    return ans;
}
