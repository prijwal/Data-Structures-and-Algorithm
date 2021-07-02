int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) {
    vector<int> a(101,0);
    int n=A.size();
    int m=B.size();
    for(int i=0;i<n;i++)
    {
        a[A[i][0]]=A[i][1];
    }
    for(int i=0;i<m;i++)
    {
        a[B[i][0]]=B[i][1];
    }
    queue<int> q;
    q.push(1);
    int cnt=1;
    
    vector<int> ans(101,1e9);
    ans[1]=0;
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            int val=q.front();
            q.pop();
            if(val==100)
            {
                ans[val]=min(ans[val],cnt);
                continue;
            }
            for(int j=1;j<7;j++)
            {
                if(val+j>100)
                    break;
                if(a[val+j]!=0 and ans[a[val+j]]>cnt)
                {
                    q.push(a[val+j]);
                    ans[a[val+j]]=cnt;
                    ans[val+j]=cnt;
                }
                else if(ans[val+j]>cnt)
                {
                    q.push(val+j);
                    ans[val+j]=cnt;
                }
            }
        }
        cnt++;
    }
    if(ans[100]==1e9)
        return -1;
    return ans[100];
}
