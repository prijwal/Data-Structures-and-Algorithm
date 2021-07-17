int Solution::solve(string s) {
    int n=s.length();
    stack<char> stk;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            stk.push('(');
        else if(stk.empty())
            return 0;
        else    
            stk.pop();
    }
    if(stk.empty())
        return 1;
    return 0;
}
