bool check(long n,long m)
{
    long long temp=m*m;
    return temp<=n;
}
int Solution::sqrt(int n) {
    long l=1,h=n;
    long ans=0;
    while(h>=l)
    {
        long m=l+(h-l)/2;
        if(check(n,m))
        {
            ans=m;
            l=m+1;
        }
        else
            h=m-1;
    }
    return ans;
}
