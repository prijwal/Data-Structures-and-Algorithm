vector<int> Solution::maxone(vector<int> &A, int B) {
    int n=A.size();
    int curr_left=0,curr_right=0;
    int best_left=0,best_right=0;
    int count0=0;
    while(curr_right<n)
    {
        if(count0<=B)
        {
            if(A[curr_right]==0)
                count0++;
            curr_right++;
        }
        if(count0>B)
        {
            if(A[curr_left]==0)
                count0--;
            curr_left++;
        }
        if(curr_right-curr_left>best_right-best_left)
        {
            best_left=curr_left;
            best_right=curr_right;
        }
    }
    vector<int> ans;
    for(int i=best_left;i<best_right;i++)
        ans.push_back(i);
    return ans;

}
