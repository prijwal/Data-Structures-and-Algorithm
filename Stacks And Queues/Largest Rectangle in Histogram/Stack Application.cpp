void left_smaller(vector<int> &a,int n,vector<int> &lft)
{
    stack<int> stk;
    for(int i=n-1;i>=0;i--)
    {
        while(!stk.empty() and a[stk.top()]>a[i])
        {
            lft[stk.top()]=i;
            stk.pop();
        }
        stk.push(i);
    }

}
void  right_smaller(vector<int> &a,int n,vector<int> &rgt)
{
    stack<int> stk;
    for(int i=0;i<n;i++)
    {
        while(!stk.empty() and  a[stk.top()]>a[i])
        {
            rgt[stk.top()]=i;
            stk.pop();
        }
        stk.push(i);
    }
}
int Solution::largestRectangleArea(vector<int> &a) {
    int n=a.size();
    vector<int> lft(n,-1),rgt(n,-1);
    left_smaller(a,n,lft);
    right_smaller(a,n,rgt);
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        int h=a[i];
        int w=0;

        if(lft[i]!=-1)
            w+=i-lft[i]-1;
        else
            w+=i;

        if(rgt[i]!=-1)
            w+=rgt[i]-i-1;
        else    
            w+=n-i-1;
        
        w+=1;
        ans=max(ans,h*w);
    }
    return ans;
}
