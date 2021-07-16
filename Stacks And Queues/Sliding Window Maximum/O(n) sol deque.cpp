vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int n=A.size();
    vector<int> ans;
    deque<int> dq;
    for(int i=0;i<n;i++)
    {
        if(i<B)
        {
            while(!dq.empty() and dq.back()<A[i])
                dq.pop_back();
            dq.push_back(A[i]);
        }
        else
        {
            ans.push_back(dq.front());
            if(A[i-B]==dq.front())
                dq.pop_front();
            
            while(!dq.empty() and dq.back()<A[i])
                dq.pop_back();
            dq.push_back(A[i]);
        }
    }
    ans.push_back(dq.front());
    return ans;
}
