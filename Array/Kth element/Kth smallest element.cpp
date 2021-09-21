#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> max_heap;
    int n,k;
    cin>>n>>k;
    
    vector<int> a(n) ;
    for(int i=0;i<n;i++)
        cin>>a[i] ;
    
    for(int i=0 ;i<n ;i++)
    {
        if(max_heap.size()<k )
        {
            max_heap.push(a[i]);
        }
        else
        {
            if(max_heap.top()>a[i])
            {
                max_heap.pop();
                max_heap.push(a[i]);
            }
        }
    }
    
    cout<<max_heap.top()<<" ";
    
    return 0;
}
