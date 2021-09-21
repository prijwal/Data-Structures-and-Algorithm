int maxSubarraySum(int a[], int n){
    
    int global_max=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        global_max=max(global_max+a[i],a[i]);
        ans=max(global_max,ans);
    }
    return ans;
}
