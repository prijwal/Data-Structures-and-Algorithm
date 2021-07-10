void Solution::arrange(vector<int> &a) {
    int n=a.size();  
    for(int i=0;i<n;i++){
        a[i]=a[i]+(a[a[i]]%n)*n;
    }
    for(int i=0;i<n;i++)
     a[i]=a[i]/n;
}
