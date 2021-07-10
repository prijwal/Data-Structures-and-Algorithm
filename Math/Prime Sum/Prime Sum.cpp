bool isprime(int n)
{
    if(n%2==0)
        return 0;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
vector<int> Solution::primesum(int n) {
    if(n==4)
        return {2,2};
    int a=2;
    int b=n-2;
    if(isprime(n-2))
        return {2,n-2};
    for(int i=3;i<=n/2;i+=2)
    {
        if(isprime(i) and isprime(n-i))
            return {i,n-i};
    }
    return {};

}
