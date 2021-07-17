string Solution::simplifyPath(string s) {
    string ans="";
    int n=s.length();
    stack<string> stk;
    int i=0;
   while(i<n)
    {
        string temp="";
        if(s[i]=='/')
        {
            while(i<n-1 and s[i+1]!='/')
            {
                i++;
                temp+=s[i];
            }

        }
        if(temp=="")
        {
            i++;
            continue;
        }
        if(temp==".")
        {
            i++;
            continue;
        }
        if(temp=="..")
        {
            if(!stk.empty())
                stk.pop();
        }
        else 
            stk.push(temp);
        i++;
    }
    bool ok=true;
    stack<string> final;
    while(!stk.empty())
    {
        final.push(stk.top());
        stk.pop();
    }
    while(!final.empty())
    {
        ok=false;
        ans+="/";
        ans+=final.top();
        final.pop();
    }
    if(ok)
        ans+="/";
    return ans;
}
