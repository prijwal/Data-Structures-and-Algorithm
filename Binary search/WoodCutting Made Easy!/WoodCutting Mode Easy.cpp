bool check(vector<int> &a,int k,int m)
{
    long val=0;
    for(auto it:a)
        val+=max(0,(it-m));
    return val>=k;
}
int Solution::solve(vector<int> &a, int k){
    int n=a.size();
    int h=*max_element(a.begin(),a.end());
    int l=0;
    int ans=0;
    while(h>=l)
    {
        int m=l+(h-l)/2;
        if(check(a,k,m))
        {
            ans=m;
            l=m+1;
        }
        else
            h=m-1;
    }
    return ans;
}
