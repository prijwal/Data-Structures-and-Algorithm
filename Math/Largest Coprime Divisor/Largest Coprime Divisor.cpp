int Solution::cpFact(int a, int b) {
    int i=1;
    while(1)
    {
        int x=a/i;
        if(x*i!=a)
        {
            i++;
            continue;
        }
        if(__gcd(x,b)==1)
            return x;
        i++;
    }
}
