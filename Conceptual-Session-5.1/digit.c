#include<stdio.h>
void digit(int n)
{
    if(n==0)
    {
        return;
    }
    int a=n%10;
    digit(n/10);
    printf("%d ",a);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t ; i++)
    {
        int n;
        scanf("%d",&n);
        digit(n);
        printf("\n");
    }
    return 0;
}