#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    for(int row=1; row<=n; row++)
    {
        for(int space=n; space>row; space--)
        {
            printf(" ");
        }
        for(int col=1; col<=row; col++)
        {
            printf("%d ",++count);
        }
        printf("\n");
    }
    return 0;
}
