void Solution::merge(vector<int> &a, vector<int> &b) {
    int i=0,j=0;
    int m=a.size();
    int n=b.size();
    int k=0;
    vector<int> r(m+n,0);
    while(i<m && j<n)
    {
        if(a[i]<=b[j]) 
        {
            r[k]=a[i];
            k++;
            i++;
        }
        else 
        {
            r[k]=b[j];
            k++;
            j++;
        } 
    }
    while(i<m)
    {
            r[k]=a[i];k++;i++;
    }
    while(j<n)
    {
            r[k]=b[j];
            k++;
            j++;
    }
    a.clear();
    for(i=0;i<(m+n);i++)
        a.push_back(r[i]);
}
