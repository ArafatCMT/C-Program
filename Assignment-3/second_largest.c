#include<stdio.h>
#include<limits.h>
int secend_largest (int *arr, int n)
{
    int largest=INT_MIN;
    int sec_large=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            sec_large=largest;
            largest=arr[i];
        }
        else if(largest>arr[i] && arr[i]>sec_large)
        {
            sec_large=arr[i];
        }
    }
    return sec_large;
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
    int sec_largest=secend_largest(arr,n);
    printf("%d",sec_largest);
    return 0;
}