int peak(const vector<int> &a,int l,int h)
{
    int n=a.size();
    while(h>=l)
    {
        int m=l+(h-l)/2;
        if(m!=n-1 and a[m]>a[m+1])
            return m;
        if(a[0]>a[m])
            h=m-1;
        else
            l=m+1;
    }
        return -1;
}
int incBinarysearch(const vector<int> &a,int l,int h,int k)
{
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(a[m]==k)
            return m;
        if(a[m]>k)
            return incBinarysearch(a,l,m-1,k);
        else 
            return incBinarysearch(a,m+1,h,k);
    }
    return -1;
}
int Solution::search(const vector<int> &a, int k) {
    int n=a.size();
    int p=peak(a,0,n-1);
    int d=-1,i=-1;
    i=incBinarysearch(a,0,p,k);
    if(i!=-1)
        return i;
    d=incBinarysearch(a,p+1,n-1,k);
    if(d!=-1)
        return d;
 
    return -1;
}
