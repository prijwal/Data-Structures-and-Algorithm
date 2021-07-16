string Solution::solve(string s) {
    int n=s.length();
    queue<char> q;
    string ans;
    vector<int> a(26,0);
    for(int i=0;i<n;i++)
    {
        if(!a[s[i]-'a'])
        {
            q.push(s[i]);
            ans+=q.front();
            a[s[i]-'a']++;
        }
        else
        {
            a[s[i]-'a']++;
            while(!q.empty() and a[q.front()-'a']!=1)
            {
                q.pop();
            }
            if(q.empty())
                ans+='#';
            else
                ans+=q.front();
        }
        
        
    }
    return ans;
}
 
