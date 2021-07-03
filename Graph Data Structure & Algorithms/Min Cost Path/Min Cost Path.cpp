bool isvalid(int i,int j,int n,int m)
{
    if(i<0 or i>=n or j<0 or j>=m)
        return false;
        
    return true;
}
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int Solution::solve(int n, int m, vector<string> &a)
{
    string s="RDLU";
    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
    pq.push({0,0,0});
    vector<vector<int>> dist(n,vector<int>(m,INT_MAX));
    dist[0][0]=0;
    while(!pq.empty())
    {
        vector<int> curr = pq.top();
        int x=curr[1];
        int y=curr[2];
        pq.pop();
        if(x==n-1 and y==m-1)
            return dist[x][y];
        for(int i=0;i<4;i++)
        {
            int xx=x+dx[i];
            int yy=y+dy[i];
            int cost=curr[0];
            if(s[i]!=a[x][y])
                cost++;
            if(isvalid(xx,yy,n,m) and cost<dist[xx][yy])
            {
                pq.push({cost,xx,yy});
                dist[xx][yy]=cost;
            }
        }
    }  
    return dist[n-1][m-1];
}
