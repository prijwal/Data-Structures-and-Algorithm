int Solution::threeSumClosest(vector<int> &a, int k) {
    int n=a.size();
    sort(a.begin(),a.end());
    long long min_diff=INT_MAX,ans;
    for(int i=n-1;i>0;i--)
    {
        int l=0,r=i-1;
        while(r>l)
        {
            long long left=a[l];
            long long right=a[r];
            long long val=a[i];
            long long sm=left+right+val;
            long long diff=abs(k-sm);
            if(diff<min_diff)
            {
                min_diff=diff;
                ans=sm;
            }
            if(sm > k)
                r--;
            else
                l++;
        }
    }
    return ans;
}
