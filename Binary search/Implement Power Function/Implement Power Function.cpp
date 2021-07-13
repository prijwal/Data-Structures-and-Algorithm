
long long mod(long val,long N)
{
    return (val%N+N)%N;
}
int Solution::pow(int x, int n, int m) 
{
    if(x==0)
        return 0;
    if(n==0)
        return 1;
    if(n==1)
        return mod(x,m);
    
    long long temp=mod(pow(x,n/2,m),m);
    if(n%2==0)
        return mod(mod(temp,m)*mod(temp,m),m);
    else
        return mod(mod(x,m)*mod(temp,m)*mod(temp,m),m);
}
