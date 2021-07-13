double median(const vector<int> &a,int n)
{
    if(n&1)
        return a[n/2];
    else    
        return (a[n/2]+a[n/2-1])/2.0;
}
double Solution::findMedianSortedArrays(const vector<int> &a, const vector<int> &b) {
    int n=a.size();
    int m=b.size();
    if(m>n)
        return findMedianSortedArrays(b,a);
    if(!m)
        return median(a,n);
    
    int l=0,h=n+m;
    while(h>=l)
    {
        int mid1=l+(h-l+1)/2;
        int mid2=(n+m+1)/2-mid1;
        if(mid2>m)
        {
            l=mid1+1;
            continue;
        }
        int left1=(mid1!=0?a[mid1-1]:INT_MIN);
        int left2=(mid2!=0?b[mid2-1]:INT_MIN);

        int right1=(mid1!=n?a[mid1]:INT_MAX);
        int right2=(mid2!=m?b[mid2]:INT_MAX);
    
        if(left1<=right2 and left2<=right1)
        {
            if((n+m)%2==0)
                return ((max(left1,left2)+min(right1,right2))/2.0);
            else
                return max(left1,left2);
        }

        if(left1>right2)
            h=mid1-1;
        else
            l=mid1+1;
    }
    return -1;
}
