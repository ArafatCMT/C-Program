#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0, k=(2*n)-1;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=s; col++)
        {
            printf(" ");
        }
        for(int col=1; col<=k; col++)
        {
            printf("*");
        }
        s++;
        k -=2;
        printf("\n");
    }
    return 0;
}