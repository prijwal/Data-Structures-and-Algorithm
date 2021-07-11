int check(vector<vector<int> > &a,int mid)
{
    int n=a.size();
    int m=a[0].size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int num=upper_bound(a[i].begin(),a[i].end(),mid)-a[i].begin();
        ans+=num;
    }
    return ans;
}
int Solution::findMedian(vector<vector<int> > &a) {
    int n=a.size();
    int m=a[0].size();
    int req=(n*m)/2;
    bool odd=false;
    if((n*m)&1)
        req++;
        
    int l=1e9+7,h=-1;

    for(int i=0;i<n;i++)
    {
        l=min(l,a[i][0]);
        h=max(h,a[i][m-1]);
    }
    int ans=0;
    while(h>=l)
    {
        int mid=l+(h-l)/2;
        int ttl=check(a,mid);   
        if(ttl>=req)
        {
            h=mid-1;
            ans=mid;
        }
        else
            l=mid+1;
    }
    return ans;
}
