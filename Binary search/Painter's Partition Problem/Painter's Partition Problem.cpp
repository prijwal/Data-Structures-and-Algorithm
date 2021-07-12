int N=10000003;
bool ispossible(vector<int>& a,int p,long long t,long long mxt)
{
    int req_painter=1;
    int n=a.size();
    long long time=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]*t>mxt)
            return false;
        if(time+a[i]*t>mxt)
        {
            req_painter++;
            time=a[i]*t;
            if(req_painter>p)
                return false;
        }
        else
            time+=a[i]*t;
    }
    return true;
}
int Solution::paint(int p, int t, vector<int> &a) {
    int n=a.size();
    long long h=0;
    for(auto it:a)
        h+=it;
    h*=t;
    long long l=0;
    long long ans=0;
    while(h>=l)
    {
        long long m=l+(h-l)/2;
        if(ispossible(a,p,t,m))
        {
            ans=m;
            h=m-1;
        }
        else 
            l=m+1;
    }
    return ans%N;
}
