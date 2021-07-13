int Solution::removeElement(vector<int> &a, int k) {
    int n=a.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=k)
        {
            a[ans++]=a[i];
        }
    }
    return ans;
    
}
