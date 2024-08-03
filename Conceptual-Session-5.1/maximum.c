#include<stdio.h>
int maximum(int *arr, int n)
{
    //base case
    if(n==0)
    {
        return arr[n];
    }
    int mx= maximum(arr,n-1);
    if(mx>arr[n])
    return mx;
    return arr[n];
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int mx=maximum(arr,n-1);
    printf("%d\n",mx);

    return 0;
}