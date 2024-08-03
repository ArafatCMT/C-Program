#include<stdio.h>
void display (int n)
{
    if(n==1)
    {
        printf("%d",n);
        return;
    }
    printf("%d ",n);
    display(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    display(n);
    return 0;
}