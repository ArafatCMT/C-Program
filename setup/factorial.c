#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int fact=1;
        while(0<n)
        {
            fact = fact * n;
            n--;
        }
        printf("%d\n",fact);
    }
    return 0;
}
