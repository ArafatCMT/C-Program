#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("Even Number");
        if (n%4==0)
        {
            printf(" and divisiable by 4");
        }
        else
        {
            printf(" and not divisiable by 4");
        }
    }
    else
    {
        printf("Odd Number");
        if (n%3==0)
        {
            printf(" and divisiable by 3");
        }
        else
        {
            printf(" and not divisiable by 3");
        }
    }
    
    return 0;
}