#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Input number of terms : ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            if(j==i)
            {
                printf("%d and the cube of the %d is : %d\n",i,j,(j*j*j));
            }
           // printf("%d and the cube of the %d is : %d\n",i,j,(j*j*j));
        }
    }
    return 0;
}