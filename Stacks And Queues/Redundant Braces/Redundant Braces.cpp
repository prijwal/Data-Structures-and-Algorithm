int Solution::braces(string s) {
    int n=s.length();
    stack<char> stk;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=')')
            stk.push(s[i]);
        else
        {
            bool ok=true;
            while(stk.top()!='(')
            {
                char c=stk.top();
                stk.pop();
                if(c=='+' or c=='-' or c=='/' or c=='*')
                    ok=false;
            }
            if(ok)
                return 1;
            stk.pop();
        }
    }
    return 0;
}
