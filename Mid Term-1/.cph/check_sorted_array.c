#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=0, flag;
    while(i<=n)
    {
        if(arr[i+1] >= arr[i])
        {
            flag=1;
            i++;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}