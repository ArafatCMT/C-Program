#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int primary_sum=0, secondary_sum=0 ;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                primary_sum +=arr[i][j];
            }
            if(i+j==n-1)
            {
                secondary_sum +=arr[i][j];
            }
        }
    }
    int total = primary_sum - secondary_sum;
    if(total<0)
    {
        total = total *(-1);
        printf("%d",total);
    }
    else
    {
        printf("%d",total);
    }
    return 0;
}