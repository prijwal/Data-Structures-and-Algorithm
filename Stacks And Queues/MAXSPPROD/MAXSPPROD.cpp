void left_bigger(vector<int> &a,long long n,vector<long long> &lft)
{
    stack<long long> stk;
    for(long long i=n-1;i>=0;i--)
    {
        while(!stk.empty() and a[stk.top()]<a[i])
        {
            lft[stk.top()]=i;
            stk.pop();
        }
        stk.push(i);
    }
}
void right_bigger(vector<int> &a,long long n,vector<long long> &rgt)
{
    stack<long long> stk;
    for(long long i=0;i<n;i++)
    {
        while(!stk.empty() and a[stk.top()]<a[i])
        {
            rgt[stk.top()]=i;
            stk.pop();
        }
        stk.push(i);
    }
}
int Solution::maxSpecialProduct(vector<int> &a) {
    long long n=a.size();
    long long N=1e9+7;
    vector<long long> lft(n,0),rgt(n,0);
    left_bigger(a,n,lft);
    right_bigger(a,n,rgt);
    long long ans=0;
    for(long long i=0;i<n;i++)
    {
        ans=max(ans,lft[i]*rgt[i]); // Don't take % here ... may be q is wrong or something 
    }
    return ans%N;
}
