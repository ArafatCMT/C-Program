#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<15; i++)
    {
        if(i%3==0)
        {
            continue;//bypass
        }
         printf("%d\n",i);
        if (i==10)
        {
            break;//loop terminate
        }
    }
    return 0;
}
/*
1
2
4
5
7
8
10
*/