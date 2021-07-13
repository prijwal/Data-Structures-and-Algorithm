void Solution::merge(vector<int> &a, vector<int> &b) {
    
    int n=a.size();
    int m=b.size();
    int i=n-1,j=m-1;
    int l=m+n-1;
    a.resize(m+n);
    while(j>=0)
    {
        if(i>=0 and a[i]>b[j])
        {
            a[l--]=a[i--];
        }
        else
        {
            a[l--]=b[j--];
        }

    }
}
