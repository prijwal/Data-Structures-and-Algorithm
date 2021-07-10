int Solution::titleToNumber(string s) {
    int n=s.length();
    int ans=0;
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        int val=s[i]-'A'+1;
        int ttl=pow(26,j);
        
        ans+=val*ttl;
    }
    return ans;
}
