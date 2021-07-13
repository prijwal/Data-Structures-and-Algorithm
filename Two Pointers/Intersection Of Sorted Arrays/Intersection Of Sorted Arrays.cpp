vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {
    int n=a.size();
    int m=b.size();
    int i=0,j=0;
    vector<int> ans;
    while(i<n and j<m)
    {
        if(a[i]==b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j])
            j++;
        else if(a[i]<b[j])
            i++;
    }
    return ans;
}
