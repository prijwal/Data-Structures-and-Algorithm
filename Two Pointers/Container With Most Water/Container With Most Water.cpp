int Solution::maxArea(vector<int> &a) {
            
    int i = 0;
    int j = a.size()-1;
    int ans = 0;
    while(i<j)
    {
        if(a[i] <= a[j])
        {
            ans=max(ans,(j-i)*a[i]);
            i++;
        }
        else
        {
            ans=max(ans,(j-i)*a[j]);
            j--;
        }
    }
    
    return ans;
}
