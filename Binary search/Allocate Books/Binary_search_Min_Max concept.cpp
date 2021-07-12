bool ispossible(vector<int> &a,int p,int k)
{
    int sm=0;
    int n=a.size();
    int req_student=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>p)
            return false;
        else if(sm+a[i]>p)
        {
            req_student++;
            sm=a[i];
            if(req_student>k)
                return false;
        }
        else 
            sm+=a[i];
    }
    return true;
}
int Solution::books(vector<int> &a, int k) {

    int n=a.size();
    if(k>n)
        return -1;
    int sm=0;
    for(auto it:a)
        sm+=it;
    int l=0,h=sm,ans=0;
    while(h>=l)
    {
        int m=l+(h-l)/2;
        if(ispossible(a,m,k))
        {
            ans=m;
            h=m-1;
        }
        else
            l=m+1;

    }
    return ans;
}
