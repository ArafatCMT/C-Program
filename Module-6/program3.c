#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) !=EOF)
    {
        if(n==1999)
        {
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    printf("Correct\n");
    return 0;
}