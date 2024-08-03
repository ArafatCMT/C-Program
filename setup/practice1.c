#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("%d ",j);
        }
        m = n-1;
        printf("\n");
    }
    return 0;
}
