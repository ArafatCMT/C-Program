#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=s; col++)
        {
            printf(" ");
        }
        for(int col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        for(int col=row-1; col>=1; col--)
        {
            printf("%d",col);
        }
        s--;
        printf("\n");
    }
    return 0;
}