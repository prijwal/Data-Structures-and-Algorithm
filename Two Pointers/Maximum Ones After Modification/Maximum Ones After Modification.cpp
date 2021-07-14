int Solution::solve(vector<int> &a, int b) {
    int n=a.size();
    int curr_left=0,curr_right=0,best_left=0,best_right=0;
    int cnt=0;
    while(curr_right<n)
    {
        if(cnt<=b)
        {
            if(a[curr_right]==0)
                cnt++;
            curr_right++;
        }
        if(cnt>b)
        {
            if(a[curr_left]==0)
                cnt--;
            curr_left++;
        }
        if(best_right-best_left < curr_right-curr_left)
        {
            best_left=curr_left;
            best_right=curr_right;
        }
    }
    return best_right-best_left;

}
