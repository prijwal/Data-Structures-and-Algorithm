vector<int> Solution::prevSmaller(vector<int> &a) {
    int n=a.size();
    stack<int> stk;
    vector<int> ans(n,-1);
    for(int i=n-1;i>=0;i--)
    {
        while(!stk.empty() and a[stk.top()]>a[i])
        {
            ans[stk.top()]=a[i];
            stk.pop();
        }
        stk.push(i);
    }
    return ans;
}
