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
    int min= INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    int cnt=0 ;
    for(int i=0; i<n; i++)
    {
        if(min==arr[i])
        {
            cnt++;
        }
    }
    if(cnt%2==1)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }
    return 0;
}