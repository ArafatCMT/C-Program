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
            printf("*");
        }
        s--;
        printf("\n");
    }
    return 0;
}