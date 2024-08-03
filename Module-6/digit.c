#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        do
        {
            b=(a%10);
            printf("%d ",b);
            a = a/10;
        }
        while(a != 0);
        printf("\n");
    }
       
    return 0;
}