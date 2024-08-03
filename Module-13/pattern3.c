#include<stdio.h>
int main()
{
    int n, k=1;
    scanf("%d",&n);
    for(int row=1; row<=n; row++)
    {
        for(int space=n; space>row; space--)
        {
            printf(" ");
        }
        for(int col=1; col<=k; col++)
        {
            printf("*");
        }
        k+=2;
        printf("\n");
    }
    return 0;
}