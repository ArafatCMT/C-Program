#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<m; col++)
        {
            printf(" ");
        }
        for(int col=row; col>=1; col--)
        {
            printf("%d",col);
        }
        m--;
        printf("\n");
    }
    return 0;
}