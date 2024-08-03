#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1, k=1;
    for(int row=1; row<=(2*n); row++)
    {
        for(int col=1; col<=s; col++)
        {
            printf(" ");
        }
        for(int col=1; col<=k; col++)
        {
            printf("*");
        }
        if(row<n)
        {
            s--;
            k +=2;
        }
        else if(row>n)
        {
            s++;
            k -=2;
        }
        printf("\n");

    }
    return 0;
}