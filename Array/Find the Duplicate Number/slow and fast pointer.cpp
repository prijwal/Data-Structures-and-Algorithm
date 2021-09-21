int findDuplicate(vector<int>& a) {
   int n=a.size();
   if(n>1)
   {
       int fast=a[a[0]];
       int slow=a[0];
       while(fast!=slow)
       {
           slow=a[slow];
           fast=a[a[fast]];
       }
       fast=0;
       while(fast!=slow)
       {
           slow=a[slow];
           fast=a[fast];
       }
       return fast;
   }
   else
       return 0;
}
