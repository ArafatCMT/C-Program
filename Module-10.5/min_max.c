#include<stdio.h>
#include<limits.h>
int main()
{
    int min=INT_MAX, min_idx;
    int max=INT_MIN, max_idx;
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        if(min > a)
        {
            min=a;
            min_idx=i;
        }
        if(max < a)
        {
            max=a;
            max_idx=i;
        }
        ar[i]=a;
    }
    ar[min_idx]=max;
    ar[max_idx]=min;
    for(i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}