int Solution::minimize(const vector<int> &a, const vector<int> &b, const vector<int> &c) {
    int aa=a.size();
    int bb=b.size();
    int cc=c.size();
    int i=0,j=0,k=0;
    int ans=INT_MAX;
    while(i<aa  or j<bb or k<cc)
    {
        int temp=max({abs(a[i] - b[j]), abs(b[j] - c[k]), abs(c[k] - a[i])});
        ans=min(ans,temp);
        if(min({a[i],b[j],c[k]})==a[i])
        {
            if(i!=aa-1)
                i++;
            else 
            {
                if(min(b[j],c[k])==b[j])
                {
                    if(j!=bb-1)
                        j++;
                    else if(k!=cc-1)    
                        k++;
                    else 
                        break;
                }
                else
                {
                    if(k!=cc-1)
                        k++;
                    else if(j!=bb-1)   
                        j++;
                    else    
                        break;
                }
            }
        }
        else if(min({a[i],b[j],c[k]})==b[j])
        {
            if(j!=bb-1)
                j++;
            else 
            {
                if(min(a[i],c[k])==a[i])
                {
                    if(i!=aa-1)
                        i++;
                    else if(k!=cc-1)   
                        k++;
                    else    
                        break;
                }
                else
                {
                    if(k!=cc-1)
                        k++;
                    else if(i!=aa-1)
                        i++;
                    else        
                        break;
                }
            }
        }
        else
        {
            if(k!=cc-1)
                k++;
            else 
            {
                if(min(b[j],a[i])==b[j])
                {
                    if(j!=bb-1)
                        j++;
                    else if(i!=aa-1)  
                        i++;
                    else    
                        break;
                }
                else
                {
                    if(i!=aa-1)
                        i++;
                    else if(j!=bb-1)
                        j++;
                    else
                        break;
                }
            }
        }
    }
    return ans;
}
