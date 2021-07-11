int firstPos(const vector<int> &a,int k,int n)
{
    int l=0,h=n-1;
    int ans=-1;
    while(h>=l)
    {
        int m=l+(h-l)/2;
        if(a[m]==k)
            ans=m;
            
        if(a[m]<k)
            l=m+1;
        else
            h=m-1;
    }
    return ans;
}
int lastPos(const vector<int> &a,int k,int n)
{
    int l=0,h=n-1;
    int ans=-1;
    while(h>=l)
    {
        int m=l+(h-l)/2;
        if(a[m]==k)
            ans=m;
            
        if(k>=a[m])
            l=m+1;
        else
            h=m-1;
    }
    return ans;
}
vector<int> Solution::searchRange(const vector<int> &a, int b) {
    int n=a.size();
    int f=firstPos(a,b,n);
    int l=lastPos(a,b,n);
    return {f,l};
}
