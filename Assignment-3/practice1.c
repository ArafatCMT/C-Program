#include<stdio.h>
void pattern (void)
{
    int n;
    scanf("%d",&n);
    int space=n-1,k=1;
    for(int row=1; row<=(2*n)-1; row++)
    {
        for(int col=1 ; col<=space; col++)
        {
            printf(" ");
        }
        for(int col=1 ; col<=k; col++)
        {
            if(row%2==1)
            printf("#");
            else
            printf("-");
        }
        printf("\n");
        if(row<n)
        {
            k +=2;
            space--;
        }
        else 
        {
            k -=2; 
            space++;
        }
    }
    
}
int main()
{
    pattern();
    return 0;
}