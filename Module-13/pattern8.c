#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    for(int row=1; row<=(2*n)-1; row++)
    {
        for(int col=1; col<=k; col++)
        {
            printf("* ");
        }
        if(row<=n-1)
        {
            k++;
        }
        else
        {
            k--;
        }
        printf("\n");
    }
    return 0;
}