bool isPalindrome(string s,int i,int j)
{
    while(i<j)
    {
        if(s[i++]!=s[j--])
            return false;
    }
    return true;
}
string longestPalin (string s){
    int n=s.length();
    string ans;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(isPalindrome(s,i,j))
            {
                if(j-i+1>mx)
                {
                    mx=j-i+1;
                    ans=s.substr(i,j-i+1);
                }
            }
        }
    }
    return ans;
}
