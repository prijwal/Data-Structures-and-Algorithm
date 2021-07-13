int Solution::solve(vector<int> &a, int b) {
    int n=a.size();
    map<int,bool> mp;
    if(b==0)
    {
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]])
                return 1;
            mp[a[i]]=true;
        }
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        mp[a[i]]=true;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]-b])
            return 1;
    }
    return 0;
}
