vector<int> Solution::maxone(vector<int> &A, int B) {
    int n=A.size();
    int l=0,r=0,pos=-1,cnt=0;
    if(B==0)
    {
        A.push_back(0);
        int c=0;
        for(int i=0;i<=n;i++)
        {
            if(A[i]==0)
            {
                if(c>cnt)
                {
                    cnt=c;
                    pos=i-cnt;
                }
                c=0;
            }
            else
                c++;
            
        }
    }
    else
    {
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(A[i]==1)
            {
                q.push(i);
            }
            else
            {
                if(B)
                {
                    B--;
                    q.push(i);
                }
                else
                {
                    if(q.size()>cnt)
                    {
                        cnt=q.size();
                        pos=q.front();
                    }
                    while( A[q.front()]==1)
                        q.pop();
                    q.pop();
                    q.push(i);

                }
            }
        }
        if(q.size()>cnt)
        {
            cnt=q.size();
            pos=q.front();
        }      
    }
    vector<int> ans;
    for(int i=pos;i<pos+cnt;i++)
        ans.push_back(i);
    return ans;

}
