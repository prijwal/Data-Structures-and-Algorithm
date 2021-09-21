#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>, greater<int> > min_heap;
    int n,k;
    cin>>n>>k;
    
    vector<int> a(n) ;
    for(int i=0;i<n;i++)
        cin>>a[i] ;
    
    for(int i=0 ;i<n ;i++)
    {
        if(min_heap.size()<k )
        {
            min_heap.push(a[i]);
        }
        else
        {
            if(min_heap.top()<a[i])
            {
                min_heap.pop();
                min_heap.push(a[i]);
            }
        }
    }
    
    cout<<min_heap.top()<<" ";
    
    return 0;
}
