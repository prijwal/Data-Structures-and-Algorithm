int Solution::diffPossible(vector<int> &a, int k) {
    int n=a.size();
    int i=0,j=1;
    if(a.size()==1)
        return 0;

    while(j<n)
    {
        if(i!=j and a[j]-a[i]==k)
            return 1;
        if(a[j]-a[i]<k)
            j++;
        else
            i++;
    }
    return 0;
}
