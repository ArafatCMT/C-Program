#include<stdio.h>
long long int summation (int arr[], int n, int i)
{
    long long int  sum=0;
    if(i==n)
    return 0;
    sum=summation(arr,n,i+1);
    return sum+arr[i];
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
    long long int sum=summation(arr,n,0);
    printf("%lld",sum);
    return 0;
}