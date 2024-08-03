#include<stdio.h>
int maximun(int arr[],int n, int i)
{
    //base case
    if(i==n-1)
    {
        return arr[i];
    }
    int largest=maximun(arr,n,i+1);
    if(largest > arr[i])
    {
        return largest;
    }
    else
    {
        largest = arr[i];
        return largest;
    }
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
    int mx=maximun(arr,n,0);
    printf("%d\n",mx);
    return 0;
}