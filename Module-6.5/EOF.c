#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        if(n==2258)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}