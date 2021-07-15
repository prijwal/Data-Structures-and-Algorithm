int Solution::divide(int divident, int divisor) {
    long long ans=0;
    bool ok=false;
    if(divident<0)
        ok=!ok;
    if(divisor<0)
        ok=!ok;

    long long a=abs((long long)divident);
    long long b=abs((long long)divisor);

    while(a>=b)
    {
        int i;
        for(i=0;i<31;i++)
        {
            if(a-(b<<i)<0)
                break;
        }
        a-=(b<<(i-1));
        ans+=(1<<(i-1));
    }
    if(ok)
        ans=-ans;
    if(ans>INT_MAX)
        return INT_MAX;  
    return ans;
}
