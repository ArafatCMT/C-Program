#include<stdio.h>
int main()
{
    int i,n;
    printf("Input number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i +=1)
    {
        if (i%2==0)
        {
            printf("%d -even\n",i);
        }
    }

    return 0;
}