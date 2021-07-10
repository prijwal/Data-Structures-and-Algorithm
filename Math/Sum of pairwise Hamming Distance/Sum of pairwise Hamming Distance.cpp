const int N=1e9+7;
int Solution::hammingDistance(const vector<int> &a) {
    long long  ans=0,n=a.size();
    long long  count;
    for(int i=0;i<32;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(a[j]&(1<<i))
             count++;
        }
        ans=(ans%N+(count*(n-count)*2)%N)%N;
    }
    return ans;
}
