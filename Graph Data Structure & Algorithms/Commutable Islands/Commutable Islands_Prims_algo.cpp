
int Solution::solve(int n, vector<vector<int> > &v) {
    map<int,vector<pair<int,int>>> al;
    int m=v.size();
    for(int i=0;i<m;i++)
    {
        al[v[i][0]].push_back({v[i][2],v[i][1]});
        al[v[i][1]].push_back({v[i][2],v[i][0]});
    }
    vector<long long> dist(n+1,1e15),parent(n+1,-1);
    dist[1]=0;
    set<pair<int,int>> st;
    map<int,bool> vis;
    st.insert({0,1});
    while(!st.empty())
    {
        auto curr=*(st.begin());
        st.erase(curr);
        int uu=parent[curr.second];
        int vv=curr.second;
        int ww=curr.first;
        vis[vv]=true;
        for(auto it:al[vv])
        {
            if(vis[it.second])
                continue;
            if(dist[it.second]>it.first)
            {
                st.erase({dist[it.second],it.second});
                dist[it.second]=it.first;
                st.insert({dist[it.second],it.second});
                parent[it.second]=vv;
            }
        }
    }
    
    int ans=0;
    for(int i=1;i<=n;i++)
    ans+=dist[i];
    return ans;
}
