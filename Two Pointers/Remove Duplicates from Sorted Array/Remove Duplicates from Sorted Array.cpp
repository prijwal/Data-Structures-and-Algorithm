int Solution::removeDuplicates(vector<int> &a) {
    int n=a.size();
    int prev=-1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=prev)
        {
            a[ans++]=a[i];
            prev=a[i];
        }
    }
    return ans;
}
