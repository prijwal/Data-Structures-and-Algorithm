int N=1000003;
int Solution::findRank(string a) {
    int n=a.length();
    string s=a;
    sort(s.begin(),s.end());
    vector<int> fact(n+1,1);
    for(int i=1;i<=n;i++)
        fact[i]=(i*fact[i-1])%N;
    int j=0,ans=1;
    while(j<n)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
                continue;
            if(s[i]!=a[j])  
                cnt++;
            else 
            {
                s[i]='*';
                break;
            }
        }
        int left=n-j-1;
        ans+=(fact[left])*cnt;
        ans%=N;
        j++;

    }
    return ans;

}
