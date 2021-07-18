void bubbleSort(vector<int> &a)
{
   int n=a.size();
   bool swaped=false;
   for (int i =0;i<n-1;i++)
   {
     swapped = false;
     for (int j=0;j<n-i-1;j++)
     {
        if (a[j]>arr[j+1])
        {
           swap(a[j],a[j+1]);
           swapped=true;
        }
     }
     if (!swapped)
        break;
   }
}
