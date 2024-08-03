#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int second_largest=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }
    int small=arr[0];
    int ssmall=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < small)
        {
            ssmall=small;
            small = arr[i];
        }
        else if(arr[i] > small && arr[i] < ssmall)
        {
            ssmall = arr[i];
        }
    }
    printf("%d %d",second_largest,ssmall);
    return 0;
}