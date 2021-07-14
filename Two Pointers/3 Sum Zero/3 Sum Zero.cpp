vector<vector<int> > Solution::threeSum(vector<int> &a) {
    int n=a.size();
    sort(a.begin(),a.end());
    vector<vector<int>> ans;
     for (int i=n-1;i>=0;i--)
    {
        while(i!=n-1 and a[i]==a[i+1])
            i--;
        int l = 0; int r = i-1;
        while(r>l)
        {
            long long left=a[l];
            long long right=a[r];
            long long val=a[i];
            long long sm=val+left+right;
            if(sm==0)
            {
                ans.push_back({a[l],a[r],a[i]});
                int lastright = a[r], lastleft = a[l];
                while(l<r and a[l] == lastleft)   l++;
                while(l<r && a[r] == lastright)   r--;  
            }
            else if(a[i]+a[l]+a[r]>0)
                r--;
            else
                l++;
        }
    }
    return ans;
}
 
