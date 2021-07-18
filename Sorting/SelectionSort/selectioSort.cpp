void selectionSort(vector<int> &a)
{
    int n=a.size();
    for (int i=0;i<n-1;i++)
    {
        int min_idx = i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(a[min_idx],a[i]);
    }
}
// Find the minimum element in the unsorted array and swap it with the begining element .
