#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=(2*n)-1;
    for(int row=1; row<=n; row++)
    {
        for(int space=1; space<row; space++)
        {
            printf(" ");
        }
        for(int col=1; col<=k; col++)
        {
            printf("*");
        }
        k -=2;
        printf("\n");
    }
    return 0;
}