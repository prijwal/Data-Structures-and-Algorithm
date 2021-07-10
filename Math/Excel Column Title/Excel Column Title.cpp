string Solution::convertToTitle(int n) {
    vector<char> v(26);
    for(int i=1;i<26;i++)
    {
        char c='A'+i-1;
        v[i]=c;
    }
    v[0]='Z';
    string ans;
    while(n)
    {
        int val=n%26;
        ans+=(v[val]);
        n/=26;
        if(val==0)
            n--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
