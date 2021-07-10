string Solution::solve(string a) {
    // bool ok=next_permutation(a.begin(),a.end());
    // if(ok)
    //     return a;
    // else 
    //     return "-1";

    // OR

    for(int i=a.length()-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        {
            for(int j=a.length();j>i;j--)
            {
                if(a[j]>a[i])
                {
                    swap(a[j],a[i]);
                    reverse(a.begin()+i+1,a.end());
                    return a;
                }
            }
        }
    }
    return "-1";

}
