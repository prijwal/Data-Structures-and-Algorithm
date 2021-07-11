int Solution::searchMatrix(vector<vector<int> > &a, int k) {
    int n=a.size();
    int m=a[0].size();
    int l=0,h=m*n-1;
    while(h>=l)
    {
        int mid=l+(h-l)/2;
        int u=mid/m;
        int v=mid%m;
        if(a[u][v]==k)
            return 1;
        if(a[u][v]>k)
            h=mid-1;
        else 
            l=mid+1;
    }
    return 0;
}
