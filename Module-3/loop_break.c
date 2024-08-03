#include<stdio.h>
int main()
{
    int i;
    //loop-1
    for(i=1; i<=15; i++)
    {
        if (i==7)
        {
            break;
        }
         printf("%d\n",i);
    }
    //loop-2
    for(i=1; i<=15; i++)
    {
        printf("%d\n",i);
        if (i==7)
        {
            break;
        }
    }
    return 0;
}