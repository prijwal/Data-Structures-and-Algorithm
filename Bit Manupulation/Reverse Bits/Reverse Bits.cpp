unsigned int Solution::reverse(unsigned int A) {
    unsigned int ans=0;
    for(int i=31;i>=0;i--)
    {
        if((1<<i)&A)
            ans|=(1<<(31-i));
    }
    return ans;
}
