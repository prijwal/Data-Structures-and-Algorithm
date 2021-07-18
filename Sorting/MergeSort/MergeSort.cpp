void merge(int v[], int s, int mid, int e)
{
    int i=s;
    int j=mid+1;
    int k=0;
    
    int temp[e-s+1];
    while(i<=mid && j<=e )
    {
        if(v[i]<v[j])
            temp[k++]=v[i++];
        else
            temp[k++]=v[j++];
    }
    while(i<=mid)  temp[k++]=v[i++];
    while(j<=e) temp[k++]=v[j++];
    
    for(int i=s;i<=e;i++)
        v[i]=temp[i-s];
}
void mergeSort(int v[], int s, int e)
{
    if(s>=e) // Base condition : if(size==0 || size==1) return ;
        return ;
    
    int mid=(s+e)/2;
    
    // Dividing the array 
    mergeSort(v,s,mid);
    mergeSort(v,mid+1,e);
    
    // Merging the array
    merge(v,s,mid,e);
}
