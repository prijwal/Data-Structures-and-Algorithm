vector<string>find_permutation(string s)
{
    vector<string> ans;
    sort(s.begin(),s.end());
  
    do{
         ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
  
    return ans;
}
