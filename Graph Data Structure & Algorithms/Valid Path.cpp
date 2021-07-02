bool isSafe(vector<int>&x_cor,vector<int>&y_cor,int &r,int x,int y,int &m,int &n,vector<vector<bool>>&vis)
{

    if(x<0 || x>m || y<0 || y>n || vis[x][y]) 
        return false;

    for(int i=0;i<x_cor.size();i++)
    {
        int dis=(pow(x-x_cor[i],2)+pow(y-y_cor[i],2));
        if(dis<=r*r) 
            return false;
    }

    return true;
}

int dy[8]={1,1,1,0,-1,-1,-1,0};
int dx[8]={-1,0,1,1,1,0,-1,-1};

bool dfs(vector<int>&x_cor,vector<int>&y_cor,int &r,int x, int y, int m,int n,vector<vector<bool>>&vis)
{
    if(x==m&&y==n) 
        return true;

    vis[x][y]=true;
    
    for(int i=0;i<8;i++)
    {
        if(isSafe(x_cor,y_cor,r,x+dx[i],y+dy[i],m,n,vis))
        {
            if(dfs(x_cor,y_cor,r,x+dx[i],y+dy[i],m,n,vis)) 
                return true;
        }
    }
    return false;
}
string Solution::solve(int x, int y, int n, int r, vector<int> &x_cor, vector<int> &y_cor) {

    vector<vector<bool>>vis(x+1,vector<bool>(y+1,false));

    if(dfs(x_cor,y_cor,r,0,0,x,y,vis))
        return "YES";

    return "NO";
}
