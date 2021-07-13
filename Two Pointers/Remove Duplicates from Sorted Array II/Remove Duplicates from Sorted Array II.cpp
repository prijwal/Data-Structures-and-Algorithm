int Solution::removeDuplicates(vector<int> &a) {
    int n=a.size();
    int prev=-1;
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1] and a[i]!=prev)
        {
            a[ans++]=a[i++];
            a[ans++]=a[i];
            prev=a[i];
        }
        else if(a[i]==prev)
        {
            int val=a[i];
            while(a[i+1]==val)
                i++;
        }
        else if(a[i]!=a[i+1])
        {
            a[ans++]=a[i];
            prev=a[i];
        }
    }
    if(a[n-1]!=prev)
        a[ans++]=a[n-1];
    return ans;
}
