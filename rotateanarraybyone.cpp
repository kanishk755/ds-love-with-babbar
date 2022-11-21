void rotate(int arr[], int n)
{
    int ans[n],j=0;

    for(int i=n-1;i<n;i++)
    {
        ans[j++]=arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        ans[j++]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=ans[i];
    }
}