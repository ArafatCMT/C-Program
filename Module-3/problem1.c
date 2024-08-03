#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Input up to the table number starting from 1:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("-----Multiplication Table No : %d-----\n",i);
       for (j=1; j<=10; j++)
       printf("%d X %d = %d\n",i,j,(i*j));
    }
    return 0;
}