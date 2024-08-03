#include<stdio.h>
void pattern (int n)
{
    int space=n;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<space; col++)
        {
            printf(" ");
        }
        for(int col=row; col>=1 ; col--)
        {
            printf("%d",col);
        }
        space--;
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}