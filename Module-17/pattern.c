#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int row= 6+(n/2);
    int space=row-1;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=(2*i-1); k++)
        {
            printf("*");
        }
        space--;
        printf("\n");
    }
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}