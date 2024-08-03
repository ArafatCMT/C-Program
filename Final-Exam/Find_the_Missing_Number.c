#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for(int i=1; i<=test; i++)
    {
        long long int M;
        int a,b,c;
        scanf("%lld %d %d %d", &M,&a,&b,&c);
        long long int x = M / (a*b*c);
        if((a*b*c*x) == M)
        {
            printf("%lld\n",x);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}