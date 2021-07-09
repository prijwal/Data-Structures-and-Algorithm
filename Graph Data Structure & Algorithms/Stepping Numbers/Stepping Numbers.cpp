vector<int> Solution::stepnum(int a, int b) {
    vector<int> ans;
    for(int i=0;i<10;i++)
    {
        queue<int> q;
        q.push(i);
        while(!q.empty())
        {
            int val=q.front();
            q.pop();
            if(val>=a and  val<=b)
                ans.push_back(val);

            if(val==0 or val >b)
                continue;

            int lastDigit=val%10;
            val=val*10;
            if(lastDigit==0)
                q.push(val+1);
            else if(lastDigit==9)
                q.push(val+8);
            else
            {
                q.push(val+lastDigit+1);
                q.push(val+lastDigit-1);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
