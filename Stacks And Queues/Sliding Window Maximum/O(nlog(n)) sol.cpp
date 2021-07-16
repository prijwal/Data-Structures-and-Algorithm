vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int n=A.size(),i;
    multiset<int,greater<int>> st;
    vector<int> ans;
    for(i=0;i<n;i++)
    {
        if(i<B)
            st.insert(A[i]);
        else
        {
            ans.push_back(*st.begin());
            st.erase(st.find(A[i-B]));
            st.insert(A[i]);
        }
    }
    ans.push_back(*st.begin());
    return ans;
}
