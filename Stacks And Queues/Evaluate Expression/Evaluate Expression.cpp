int Solution::evalRPN(vector<string> &a) {
    int n=a.size();
    stack<int> stk;
    for(int i=0;i<n;i++)
    {
        if(a[i]!="/" and a[i]!="+" and a[i]!="-" and a[i]!="*")
        {
            int val=stoi(a[i]);
            stk.push(val);
        }
        else
        {
            if(a[i]=="/")
            {
                int p=stk.top();
                stk.pop();
                int q=stk.top();
                stk.pop();
                stk.push(q/p);
            }
            else if(a[i]=="*")
            {
                int p=stk.top();
                stk.pop();
                int q=stk.top();
                stk.pop();
                stk.push(p*q);
            }
            else if(a[i]=="+")
            {
                int p=stk.top();
                stk.pop();
                int q=stk.top();
                stk.pop();
                stk.push(p+q);
            }
            else
            {
                int p=stk.top();
                stk.pop();
                int q=stk.top();
                stk.pop();
                stk.push(q-p);
            }
        }
        
    }
    return stk.top();
}
