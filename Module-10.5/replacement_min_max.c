#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int min =INT_MAX;
    int max = INT_MIN;
    int min_idx, max_idx;
    for(i=0; i<n ; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
            min_idx = i;
        }
        if (max < ar[i])
        {
            max = ar[i];
            max_idx = i;
        }
    }
    ar[min_idx]=max;
    ar[max_idx]=min;
    for(i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}