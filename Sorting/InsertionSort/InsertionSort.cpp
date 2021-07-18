void insertionSort(vector<int> &a)
{
    int n=a.size();
    for (int i = 1; i < n; i++)
    {
        int val=a[i];
        int j=i-1;
        while (j >= 0 and val<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        arr[j+1]=val;
    }
}
