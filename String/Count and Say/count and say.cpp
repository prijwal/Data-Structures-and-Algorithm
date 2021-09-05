    string countAndSay(int k) {
        if(k==1)
            return "1";
        if(k==2)
            return "11";
        string s=countAndSay(k-1);
        string ans="";
        int n=s.length();
        for(int i=1;i<n;i++)
        {
            int cnt=1;
            while(i<n and s[i-1]==s[i])
            {
                i++;
                cnt++;
            }
            ans+=to_string(cnt)+s[i-1];     
        }
        if(n>1 and s[n-1] != s[n-2])    
        {
            ans+="1";
            ans+=s[n-1];
        }
        return ans;
    }
