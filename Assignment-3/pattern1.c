#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space=n-1;
    int k=1;
    for(int row=1; row<=(2*n)-1; row++)
    {
        for(int col=1; col<=space; col++)
        {
            printf(" ");
        }
        for(int col=1; col<=k; col++)
        {
            if(row%2==1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        if(row<n)
        {
            space--;
            k +=2;
        }
        else if(row>=n)
        {
            space++;
            k -=2;
        }
    }
    return 0;
}