#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int out_space=n-1 , k=1, in_space=0;
    for(int row=1; row<=n ; row++)
    {
        for(int col=1; col<=out_space; col++)
        {
            printf(" ");
        }
        for(int col=1; col<=k; col++)
        {
            printf("*");
            for(int co=1; co<in_space; co++)
            {
                printf(" ");
            }
        }
        if(k==1)
            {
            k = k+1;
            }
        if(row<n-1)
        {
            out_space--;
            in_space +=2;
        }
        else if(row==n-1)
        {
            out_space = 0;
            in_space = 0;
            k = (2*n+1)-2;
        }
        printf("\n");
    }
    return 0;
}