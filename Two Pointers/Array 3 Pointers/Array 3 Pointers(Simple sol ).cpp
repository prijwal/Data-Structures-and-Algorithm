
int Solution::minimize(const vector<int> &a, const vector<int> &b, const vector<int> &c) {
    int aa=a.size();
    int bb=b.size();
    int cc=c.size();
    int i=0,j=0,k=0;
    int ans=INT_MAX;
    while(i<aa  and j<bb and k<cc)
    {
        int temp=max({abs(a[i] - b[j]), abs(b[j] - c[k]), abs(c[k] - a[i])});
        ans=min(ans,temp);
        if(a[i]<=b[j] and a[i]<=c[k])
            i++;
        else if(b[j]<=a[i] and b[j]<=c[k])
            j++;
        else
            k++;
    }
    return ans;
}
