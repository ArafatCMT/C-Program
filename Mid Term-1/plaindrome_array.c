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
    int i=0, j=n-1,flag;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
            flag=0;
            break;
        }
        else 
        {
            i++;
            j--;
            flag=1;
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