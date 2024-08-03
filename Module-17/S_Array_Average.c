#include<stdio.h>
int array_average(int *arr,int n,int i)
{
    //base case
    if(i==n)
    return 0;
    int sum=array_average(arr,n,i+1);
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
    float sum=(array_average(arr,n,0)/(n*1.0));
    printf("%0.6f",sum);

    return 0;
}