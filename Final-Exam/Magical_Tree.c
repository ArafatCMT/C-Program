#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int row = 11 + (n/2);
    int triangle_shape = row-5;
    int space = triangle_shape -1 ; 
    int star = 1;
    for(int i=1; i<=row; i++)
    {
        for(int col=1; col<=space; col++)
        {
            printf(" ");
        }
        for(int col=1; col<=star; col++)
        {
            printf("*");
        }
        printf("\n");
        if(i < triangle_shape)
        {
            space--;
            star +=2;
        }
        else if (i >= triangle_shape)
        {
            space = 5;
            star = n;
        }
    }
    return 0;
}