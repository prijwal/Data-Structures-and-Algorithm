int peak(vector<int> &a,int l,int h)
{
    int n=a.size();
    int m=l+(h-l)/2;
    if((m==0 or a[m-1]<a[m]) and (m==n-1 or a[m]>a[m+1]))
        return m;
    else if(m!=0 and a[m-1]>a[m])
        return peak(a,l,h-1);
    else if(m!=n-1 and a[m]<a[m+1])
        return peak(a,m+1,h);
}
int incBinarysearch(vector<int> &a,int l,int h,int k)
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
int decBinarysearch(vector<int> &a,int l,int h,int k)
{
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(a[m]==k)
            return m;
        if(a[m]>k)
            return decBinarysearch(a,m+1,h,k);
        else if(a[m]<k)
            return decBinarysearch(a,l,m-1,k);

    }
    return -1;
}
int Solution::solve(vector<int> &a, int k) {
    int n=a.size();
    int p=peak(a,0,n-1);
    int d=-1,i=-1;
    i=incBinarysearch(a,0,p,k);
    d=decBinarysearch(a,p+1,n-1,k);
    if(i!=-1 or d!=-1)
        return i!=-1?i:d;
    return -1;
}
