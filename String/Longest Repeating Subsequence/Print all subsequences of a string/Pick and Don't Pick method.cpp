void printSubsequence(string s, string ans="")
{
    if (s.empty()) {
        cout << ans << endl;
        return;
    }
    printSubsequence(s.substr(1), ans + s[0]); // Pick
  
    printSubsequence(s.substr(1), ans); // Don't pick
}
